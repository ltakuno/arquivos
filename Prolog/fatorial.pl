fatorial(0, R) :- R = 1, !.
fatorial(N, R) :- N1 is N - 1,
		 fatorial(N1, R1),
		 R is N * R1.


fat(1,1).
fat(X,F) :- X1 is X-1, fat(X1, F1), F is X * F1.
