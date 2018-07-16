soma(0,0).
soma(N,R) :- A is N-1, soma(A,Ra), R is N + Ra.
