/*
Você foi solicitado a ajudar a estudar a população de pássaros migrando através do continente. Cada tipo de pássaro será identificado por um valor inteiro. Cada momento um tipo particular de pássaro é visto, seu número id será incluido em seu vetor de observação. Você gostaria de ser capaz de descobrir qual é o tipo mais comum dado a lista de observação. Sua tarefa é imprimir o número do tipo desse pássaro e se dois ou mais tipos são igualmente comuns, escolha o tipo com o menor ID.
*/



let l = [1,1,1,4,4,4,4,5,5,5,3,3,3,3]
let grupos = Dictionary(grouping: l, by: { $0 })
print(grupos
        .map{$0.value}
        .sorted(by:{$0[0] > $1[0]})
        .sorted(by: {$0.count >= $1.count})
        .first!
        .first!
)

