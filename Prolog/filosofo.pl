intelectual(platao).
intelectual(socrates).
grego(platao).
grego(socrates).

filosofo(X) :- intelectual(X),grego(X).

listar_filosofos :-
	write('Filosofos: '), nl,
	filosofo(X), write(X), nl,
	fail.
