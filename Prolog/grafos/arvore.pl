t1(arvore(arvore(nulo,10,arvore(nulo,15,(arvore(arvore(nulo,16,nulo),18,nulo)))), 20, arvore(nulo,30,nulo))).
t2(arvore(arvore(arvore(nulo,2,nulo), 4, arvore(nulo,5,nulo)), 6, arvore(arvore(nulo,7, nulo), 9, nulo))).


inorder(arvore(Esquerda,Valor,Direita),Lista) :- inorder(Esquerda,LE), 
                                                 inorder(Direita,LD),
                                                 append(LE,[Valor|LD],Lista).
inorder(nulo, []).

preorder(arvore(Esquerda,Valor,Direita),Lista) :- preorder(Esquerda,LE),
                                                  preorder(Direita,LD),
                                                  append([Valor],LE,R1),
                                                  append(R1,LD,Lista).
preorder(nulo,[]).

posorder(arvore(Esquerda,Valor,Direita),Lista) :- posorder(Esquerda, LE),
                                                  posorder(Direita, LD), 
                                                  append(LE,LD,R1),
                                                  append(R1,[Valor],Lista).
posorder(nulo,[]). 

% percurso iorder
mostrar(nulo,_).
mostrar(arvore(Esquerda,Valor,Direita),N) :- N1 is N+1, 
                                             mostrar(Esquerda,N1),
                                             mostrarValor(Valor,N),
                                             mostrar(Direita,N1).

% mostrar o valor com N tabs da margem da tela.
mostrarValor(Valor,N) :- N>0,!, N1 is N-1, write('\t'), mostrarValor(Valor,N1).
mostrarValor(Valor,_) :- write(Valor), nl.

busca(Valor,arvore(_,Valor,_)):-!.
busca(Valor,arvore(Esquerda,V,_)) :- Valor<V,!,busca(Valor,Esquerda).
busca(Valor,arvore(_,_,Direita)) :- busca(Valor,Direita). 



inserir(V, nulo, arvore(nulo,V,nulo)) :- write('Inserido: '),write(V), nl.
inserir(V, arvore(E,V,D), arvore(E,V,D)) :-!, write('Valor já está na árvore\n').
inserir(V, arvore(E,Valor,D), arvore(NE,Valor,D)) :- V<Valor,!, inserir(V,E,NE).
inserir(V, arvore(E,Valor,D), arvore(E,Valor,ND)) :- inserir(V,D,ND).


conta_elementos(nulo,0).
conta_elementos(arvore(E,_,D),N) :- conta_elementos(E,NE),
                                    conta_elementos(D,ND),
                                    N is NE + ND + 1.

remover(Valor,nulo, nulo) :- write(Valor), 
                             write(' não está na árvore!').
remover(Valor, arvore(E,Valor,nulo), E) :- !.
remover(Valor, arvore(nulo,Valor,D), D) :- !.
remover(Valor, arvore(E,Valor,D), arvore(NE, MaiorEsq, D)) :- maiorEsq(E, MaiorEsq, NE).
remover(Valor, arvore(E,V,D), arvore(NE, V, D)) :- Valor < V,!,remover(Valor, E,NE).
remover(Valor, arvore(E,V,D), arvore(E,V,ND)) :- remover(Valor, D, ND).


maiorEsq(arvore(E,Valor,nulo), Valor, E):-!.
maiorEsq(arvore(E,V,D), Valor, arvore(E,V,ND)) :- maiorEsq(D, Valor, ND).
