maior(X, Y, X) :- number(X), number(Y), X >= Y.
maior(X, Y, Y) :- number(X), number(Y), X < Y.
