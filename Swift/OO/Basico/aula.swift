enum Dia: Int {
    case seg, ter, qua, qui, sex, sab, dom
}

class Aula{
    let tema: String
    var dia: Dia?
    init(tema: String, dia: Dia? = nil){
        self.tema = tema
        self.dia = dia
    }
}

extension Aula: CustomStringConvertible{
    var description: String {
        if let dia = dia{
            return tema + ", agendado para \(dia)"
        }
        return tema + ", não agendado"
    }
}

var aulas : [Aula] = [
    Aula(tema: "Introducao ao Swift", dia: .seg),
    Aula(tema: "Expressões lógicas", dia: .ter),
    Aula(tema: "Estrutura sequencial", dia: .qua),
    Aula(tema: "Estrutura condicional", dia: .qui),
    Aula(tema: "Estrutura de repetição", dia: .sex),
    Aula(tema: "Loop for in"),
    Aula(tema: "Loop while"),
    Aula(tema: "Loop repeat while")
]

aulas.forEach{print($0)}

let aulas_nao_agendadas = aulas.filter{ $0.dia == nil }.map { $0.tema }
print(aulas_nao_agendadas)

