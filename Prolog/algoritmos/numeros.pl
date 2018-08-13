ver_divisores(N, N, [N]) :- !.
ver_divisores(N, I, [I|L]) :- I < N, 
                              N mod I =:= 0, 
                              I1 is I + 1, 
                              ver_divisores(N, I1, L), !.
ver_divisores(N, I, L) :- I < N, 
                          N mod I =\= 0, 
                          I1 is I + 1, 
                          ver_divisores(N, I1, L).

divisores(N, L) :- ver_divisores(N, 1, L).

