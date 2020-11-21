struct Caixa {
    let nome: String
    let tamanho: String 
    init(nome: String, tamanho: String){
        self.nome = nome
        self.tamanho = tamanho
    }
}


let caixas = [
    Caixa(nome: "Caixa 0", tamanho:"P"),
    Caixa(nome: "Caixa 1", tamanho:"M"),
    Caixa(nome: "Caixa 2", tamanho:"G"),
    Caixa(nome: "Caixa 3", tamanho:"M"),
    Caixa(nome: "Caixa 4", tamanho:"P"),
    Caixa(nome: "Caixa 5", tamanho:"M"),
    Caixa(nome: "Caixa 6", tamanho:"G"),
    Caixa(nome: "Caixa 7", tamanho:"G"),
    Caixa(nome: "Caixa 8", tamanho:"M"),
    Caixa(nome: "Caixa 9", tamanho:"M"),
    Caixa(nome: "Caixa 1", tamanho:"M"),
    Caixa(nome: "Caixa 11", tamanho:"P"),
    Caixa(nome: "Caixa 12", tamanho:"G"),
    Caixa(nome: "Caixa 13", tamanho:"P"),
    Caixa(nome: "Caixa 14", tamanho:"P"),
]

let grupos = Dictionary(grouping: caixas, by:{$0.tamanho})

print(grupos["P"]!.map{ $0.nome })
print(grupos["M"]!.map{ $0.nome })
print(grupos["G"]!.map{ $0.nome })
