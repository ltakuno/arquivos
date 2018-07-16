atributos(ursula,bonita).
atributos(norberto,rico).
atributos(norberto,bonito).
atributos(berta,forte).
atributos(berta,rica).
atributos(pierre,bonito).
atributos(pierre,forte).
atributos(bruno,forte).
atributos(bruno,amavel).

homem(norberto).
homem(pierre).
homem(bruno).
mulher(ursula).
mulher(berta).

mulherbonita(M) :- mulher(M),atributos(M,bonita).
gostademulher(H,M) :- homem(H), mulherbonita(M).
homemfeliz(H) :- homem(H), atributos(H,rico).
gostaberta(X) :- homem(X), atributos(berta, bonita).
bertagosta(X,Y) :- homem(Y), gostaberta(X).
ursulagosta(X,Y) :- homem(X), gostademulher(X,Y), atributos(X,rico), atributos(X,amavel); homem(X), gostademulher(X,Y), atributos(X, bonito), atributos(X,forte).
feliz(X,Y) :- homemfeliz(X); bertagosta(X,Y); ursulagosta(X,Y).

