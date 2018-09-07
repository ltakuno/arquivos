aresta(c,a).
aresta(a,b).
aresta(d,e).
aresta(a,d).
caminho(X,Y) :- aresta(X,Z),aresta(Z,Y).
