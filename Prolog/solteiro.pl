casado(pedro,maria).
casado(joao,ana).
casado(marcelo,renata).

solteiro(X) :- \+casado(X,_), \+casado(_,X).


