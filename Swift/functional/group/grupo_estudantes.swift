struct Estudante{
    let nome : String
    let sexo: String
    init(nome: String, sexo: String){
        self.nome = nome
        self.sexo = sexo
    }
}


let turma2020 = [
    Estudante(nome: "Joao", sexo:"M"),
    Estudante(nome: "Pedro", sexo:"M"),
    Estudante(nome: "Paulo", sexo:"M"),
    Estudante(nome: "Ana", sexo:"F"),
    Estudante(nome: "Silvia", sexo:"F"),
    Estudante(nome: "Bia", sexo:"F"),
    Estudante(nome: "Juliana", sexo:"F"),
    Estudante(nome: "Gabriel", sexo:"M"),
    Estudante(nome: "Murilo", sexo:"M"),
    Estudante(nome: "Arthur", sexo:"M"),
    Estudante(nome: "Maria", sexo:"F"),
    Estudante(nome: "Daniela", sexo:"F"),
    Estudante(nome: "Denise", sexo:"F")
]

// let estudantes = Dictionary(grouping: turma2020, by:{$0.sexo})

// print(estudantes["F"]!.map{ $0.nome })
// print(estudantes["M"]!.map{ $0.nome })

let estudantes_por_nome = Dictionary(grouping: turma2020, by:{$0.nome.first!})
//print(estudantes_por_nome["D"]!.map{ $0.nome })


var grupos = [[Estudante]]()
let estudantes = estudantes_por_nome.keys.sorted()
estudantes.forEach{ (estudante) in
    grupos.append(estudantes_por_nome[estudante]!)
}

grupos.forEach({
    $0.forEach({print($0)})
    print("------------------")
})
