let livros = ["harrypotter":100.0, "junglebook":1000.0]

let r = livros.reduce(10){(resultado, tuplaChaveValor) in
   return resultado + tuplaChaveValor.value
}

print(r)

let r1 = livros.reduce("Livros:"){(resultado, tuplaChaveValor) in
   return resultado + " " + tuplaChaveValor.key 
}
print(r1)

