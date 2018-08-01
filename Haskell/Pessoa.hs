
type Nome = String
type Idade = Int
type Linguagem = String
type Pessoa = (Nome, Idade, Linguagem)

pessoa :: Pessoa
pessoa = ("joao", 20, "Haskell")

fst_att :: Pessoa -> Nome
fst_att(n, i, l) = n
