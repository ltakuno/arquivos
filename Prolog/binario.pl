binario(0).
binario(X) :- 
		X > 0,
		B is X mod 2,
		N is X//2,
		binario(N),
		write(B).
