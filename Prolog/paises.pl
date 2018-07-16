pais(brasil).
pais(uruguai).
pais(chile).
pais(argentina).
pais(paraguai).
pais(bolivia).
pais(venezuela).

limite_com(brasil, argentina).
limite_com(brasil, paraguai).
limite_com(brasil, uruguai).
limite_com(argentina,chile).
limite_com(argentina, uruguai).
limite_com(venezuela, brasil).
limite_com(brasil, bolivia).

fronteira(X,Y) :- limite_com(X,Y); limite_com(Y,X).

superficie_pais(brasil,8511965).
superficie_pais(uruguai, 176000).

pais_pequeno(X) :- superficie_pais(X,Y), Y < 1000000.
