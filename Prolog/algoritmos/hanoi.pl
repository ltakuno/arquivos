%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Torres de hanoi
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
hanoi(N) :- 
  move(N, pinoA, pinoB, pinoC).


move(0, _, _, _) :- !.
move(N, A, B, C) :-
  N1 is N - 1,
  move(N1, A, C, B), 
  informa(A, C), 
  move(N1, B, A, C).


informa(Origem, Destino) :- 
  write('Move disco do '), 
  write(Origem),
  write(' para o '), 
  write(Destino),
  nl.

