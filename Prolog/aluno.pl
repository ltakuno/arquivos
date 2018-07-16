eh_id_aluno(1001, alberto_silva).
eh_id_aluno(1002, carlos_costa).
eh_id_aluno(1003, andrea_matos).

nome_aluno(X) :- eh_id_aluno(X, Y), write(X), write(' '), write(Y).
