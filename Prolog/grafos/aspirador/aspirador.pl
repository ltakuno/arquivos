inicial([sala1, suja, suja]).
objetivo([_, limpa, limpa]).

acao(entrar1, [sala2, Y, Z], [sala1, Y, Z]).
acao(entrar2, [sala1, Y, Z], [sala2, Y, Z]).
acao(aspirar, [sala1, suja, Z], [sala1, limpa, Z]).
acao(aspirar, [sala2, Y, suja], [sala2, Y, limpa]).

sucessores(E:C, V, S) :- findall(N: [A|C], (acao(A,E,N), not(member(N,V))), S).
insereNoInicio(S, F, NF) :- append(S, F, NF), !.

union([],L2,L2).
union([H|T], L2, R):- member(H, L2), union(T, L2, R).
union([H|T], L2, [H|R]) :- union(T, L2, R).

busca_profundidade(P) :- inicial(E), 
                         busca_profundidade([E:[]], [], P).
busca_profundidade([E:C|_], _, P) :- objetivo(E), !, reverse(C, P).
busca_profundidade([E:C| F], V, P) :- sucessores(E:C, V, S), 
                                     insereNoInicio(S, F, NF), 
                                     union([E], V, NV),
                                     busca_profundidade(NF, NV, P).

executar :- inicial(Ei), 
            objetivo(Ef), 
            buscar_solucao(Ei, Ef, Caminho, [Ei]), 
            nl, escreve(Caminho).

escreve([_]).
escreve([E1, E2|T]) :- explica(E1, E2), nl, escreve([E2|T]).

explica([sala1,X,Y],[sala2,X,Y]) :- write('Aspirador saiu da sala1 e entrou na sala2').
explica([sala2,X,Y],[sala1,X,Y]) :- write('Aspirador saiu da sala2 e entrou na sala1').
explica([sala1,suja,_], [sala1, limpa,_]) :- write('Aspirador limpou a sala1').
explica([sala2,_,suja], [sala2, _,limpa]) :- write('Aspirador limpou a sala2').


buscar_solucao(Ef, Ef, [Ef], _).
buscar_solucao(Ea, Ef, [Ea|R], Eants) :- acao(_, Ea, Eseg), 
                                         not(member(Eseg, Eants)),
                                         buscar_solucao(Eseg, Ef, R, [Eseg|Eants]).
 
