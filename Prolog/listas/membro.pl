membro(X,[X|_]).
membro(X,[_|L]) :- membro(X,L).
