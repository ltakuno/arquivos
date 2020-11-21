class Estudante{
    var nome : String?
    var sexo: String?
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

let estudantes = Dictionary(grouping: turma2020, by:{$0.sexo!})

print(estudantes["F"]!.map{ $0.nome! })
print(estudantes["M"]!.map{ $0.nome! })
