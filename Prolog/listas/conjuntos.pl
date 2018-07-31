subset([],_).
subset([X|R],S) :- member(X,S), subset(R,S).

uniao([],S,S).
uniao([H|T],S,R) :- member(H,S), uniao(T,S,R).
uniao([H|T],S,[H|U]) :- uniao(T,S,U).

diff([],S,[]).
diff([H|T],S,R) :- member(H,S), diff(T,S,R).
diff([H|T],S,[H|U]) :- diff(T,S,U).
