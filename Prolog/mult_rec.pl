mult(X,1,X).
mult(X,Y,P) :- 
		Y > 0,
		N is Y - 1,
		mult(X,N,R),
		P is X + R.
