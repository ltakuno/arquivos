insert(X, [], [X]) :- !.
insert(X, [H|T], [H|S]) :- X > H,!, insert(X, T, S).
insert(X, [H|T], [X,H|T]) :- X =< H.

insertion_sort([], []) :- !.
insertion_sort([X|T], L) :- insertion_sort(T, S), insert(X, S, L).


divida([],[],[]) :- !.
divida([X],[X],[]) :- !.
divida([X,Y|L],[X|S1],[Y|S2]) :- divida(L, S1, S2).

intercale(S1,[], S1) :- !.
intercale([],S2, S2) :- !.
intercale([X|S1], [Y|S2], [X|L]) :- X =< Y, !,
                                    intercale(S1, [Y|S2], L).
intercale([X|S1], [Y|S2], [Y|L]) :- X > Y,
                                    intercale([X|S1], S2, L).


merge_sort([],[]) :- !.
merge_sort([X],[X]) :- !.
merge_sort(L,S) :-
                   divida(L, L1, L2),
                   merge_sort(L1, S1),
                   merge_sort(L2, S2),
                   intercale(S1, S2, S).
