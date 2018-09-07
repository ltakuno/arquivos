if(Condicao,Then,_) :- Condicao, !, Then.
if(_,_,Else) :- Else.


if2(Condicao,Then,Else) :- (Condicao -> Then; Else).

