binario(0).
binario(X) :- 
		X > 0,
		B is X mod 2,
		N is X//2,
		binario(N),
		write(B).


d(0).
d(1).
b([A,B,C]) :- d(A), d(B), d(C).


bin([A,B,C]) :- d(A), !, d(B), d(C).
