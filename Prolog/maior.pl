maior(X, Y, X) :- number(X), number(Y), X >= Y.
maior(X, Y, Y) :- number(X), number(Y), X < Y.

max(A, B, B) :- A < B, !.
max(A, B, A) :- A >= B.

maior1(A, B, B) :- !, A < B.
maior1(A, B, A) :- A >= B.

maior2(A, B, B) :- A < B, !.
maior2(A, _, A).

