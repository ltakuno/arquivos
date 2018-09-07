% Em uma fazenda, há somente galinhas e porcos.
% Sabe-se que há 18 cabeças e 58 pés.
% Quantas galinhas e porcos existem?
:- use_module(library(clpfd)).

go :- [X,Y] ins 1..18,
      X+Y #= 18,
      2*X+4*Y #= 58,
      labeling([max(X),max(Y)],[X,Y]),
      write([X,Y]).
