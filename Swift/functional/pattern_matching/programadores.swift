
func mostrar(_ programadores : [(String,String)]) {
    programadores.forEach{ (programador) in
        switch programador {
        case (let nome, "Swift"):
            print("\(nome) programa em Swift")
            
        case let(_,linguagem):
            print("Algum outro programa em \(linguagem)")
            
        }
    }
}

let programadores = [("Joao", "Android"),
                     ("Pedro", "Java"),
                     ("Ana", "Android"),
                     ("Jose", "Swift"),
                     ("Maria", "Swift")]
mostrar(programadores)
