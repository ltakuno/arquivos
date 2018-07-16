fav_char :-
	write('qual é o seu caracter favorito? '),
	get(X),
	format('The Ascii value ~w is ', [X]),
	put(X), nl.
