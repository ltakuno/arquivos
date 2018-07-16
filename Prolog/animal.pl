come(urso,peixe).
come(peixe,peixinho).
come(peixinho,alga).
come(peixe,alga).
come(urso,raposa).
come(veado,grama).
come(peixe,minhoca).
come(urso,guaxinim).
come(raposa,coelho).
come(urso,veado).
come(lince,veado).
come(planta_carnívora,mosca).
come(veado,planta_carnívora).
animal(urso).
animal(peixe).
animal(raposa).
animal(veado).
animal(minhoca).
animal(lince).
animal(coelho).
animal(guaxinim).
animal(mosca).
animal(peixinho).
planta(grama).
planta(alga).
planta(planta_carnívora).

%% carnívoro é quem como animal
carnívoro(X):-come(X,Y), animal(Y).

%% herbívoro é quem come planta e não come animal
herbívoro(X):-come(X,Y),planta(Y),not(carnívoro(X)).  % \+ é a negacao

%% predador é carnívoro e também é animal
predador(X):-carnívoro(X),animal(X).

%% presa é quem é comido por predador e também é animal
presa(X):-come(Y,X),predador(Y),animal(X).

%% caçado é quem é presa
caçado(X):-presa(X).

%% X pertence a cadeia alimentar de Y
pertence_a_cadeia(X,Y):-come(Y,X).
pertence_a_cadeia(X,Y):-come(Z,X),pertence_a_cadeia(Z,Y).
