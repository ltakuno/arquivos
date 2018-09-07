menu(Escolha) :- Escolha = 6, write("Terminado").
menu(_) :- nl,
           write("Escolha uma opcao: "), nl,
           write("1. Adiciona um telefone ao Banco de Dados"), nl,
           write("2. Deleta um telefone do Banco de Dados"), nl
