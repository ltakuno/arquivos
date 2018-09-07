conectado(a,b,3).
conectado(a,c,4).
conectado(a,d,5).
conectado(b,d,2).
conectado(c,d,4).
conectado(c,f,5).
conectado(d,e,2).
conectado(e,f,2).
caminho(X,Y,K) :- conectado(X,Y,K).
caminho(X,Y,K) :- conectado(X,Z,K1),
                  caminho(Z,Y,K2), K is K1 + K2.

