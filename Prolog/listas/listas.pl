adiciona(X,L,[X|L]).

concatena([], B, B).
concatena([X|A], B, [X|C]) :- concatena(A, B, C).

comprimento(0,[]).
comprimento(N,[_|R]) :- comprimento(N1, R), N is 1 + N1.

somatorio(0,[]).
somatorio(S,[X|R]) :- somatorio(Soma, R), S is Soma + X.

media(M, L) :- somatorio(S,L), comprimento(N,L), M is S/N.

imprime([]) :- nl.
imprime([X|R]) :- write(X), write(' '), imprime(R).


remove(_,[],[]).
remove(X,[X|L1],L2) :- remove(X,L1,L2).
remove(X,[Y|L1],[Y|L2]) :- X \= Y,
			remove(X,L1,L2).

conta(_,[],0).
conta(X, [X|L1], N) :- conta(X, L1, N1), N is N1 + 1.
conta(X, [Y|L1], N) :- X \= Y, conta(X, L1, N). 

separa([],[],[]).
separa([X|L1],[X|P], N) :- X > 0, separa(L1, P, N).
separa([X|L1],P,[X|N]) :- X < 0, separa(L1, P, N).
separa([X|L1],P,N) :- X == 0, separa(L1, P, N). 

membro(X,[X|_]).
membro(X,[_|L]) :- membro(X,L).

membro1(X,[X|_]) :- !.
membro1(X,[_|L]) :- membro(X,L).

nao_eh_membro(X,L) :- membro(X, L), !, fail.
nao_eh_membro(_,_).

nao_eh_membro1(X,L) :- \+ membro(X, L).


max(X,[X]).
max(X,[Y|R]) :- max(X,R), X>Y, !.
max(Y,[Y|_]).

rev([],B,B).
rev([X|T], R, Y) :- rev(T, [X|R], Y).


remova(X,[X|T],T).
remova(X,[Y|T],[Y|T1]) :- remova(X,T,T1).

permutar([],[]).
permutar(L,[X|P]) :- remova(X, L, L1), permutar(L1,P). 
