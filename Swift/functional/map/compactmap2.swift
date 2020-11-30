let pessoas: [String?] = ["Joao", nil, "Pedro", nil, "Ana"]
let validas = pessoas.compactMap{$0}
print(validas)
