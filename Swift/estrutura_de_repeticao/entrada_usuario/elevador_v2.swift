/*
Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para
otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual
cada usuário respondia:
- o elevador que utilizava com mais freqüência;
- o período que utilizava o elevador, entre:
- “M” = matutino;
- “V” = vespertino;
- “N” = noturno.
Construa um programa que calcule e imprima:
- qual é o elevador mais freqüentado e em que período se concentra o maior fluxo;
- qual o período mais usado de todos e a que elevador pertence;
- qual a diferença percentual entre o mais usado dos horários e o menos usado;
- qual a percentagem sobre o total de serviços prestados do elevador de média
utilização.


resources: https://www.dotnetperls.com/dictionary-swift
*/

func leitura_dos_dados(_ elevadores: inout [String: Elevador]){
  for _ in 1...5 {
    print("Qual é o elevador que você utiliza com mais frequência (A, B ou C)? ", terminator: "")
    let elevador = readLine()!
    print("Qual é o período que utiliza o elevador [(M)atutino, (V)espertino, (N)oturno]? ", terminator: "")
    let periodo = readLine()!
    elevadores[elevador]?.frequencia += 1
    elevadores[elevador]?.periodo[periodo]? += 1
  }
}

func periodo_com_maior_fluxo(_ periodo: [String: Int]){
  if periodo["M"]! >= periodo["V"]! &&
     periodo["M"]! >= periodo["N"]!{
       print("O periodo com maior fluxo é o matutino!")
  } else if periodo["V"]! >= periodo["M"]! &&
     periodo["V"]! >= periodo["N"]!{
       print("O periodo com maior fluxo é o vespertino!")
  } else {
       print("O periodo com maior fluxo é o noturno!")
  }

}

func elevador_A_eh_o_mais_frequentado(_ elevadores: [String: Elevador])->Bool{
  return  elevadores["A"]!.frequencia >= elevadores["B"]!.frequencia &&
     elevadores["A"]!.frequencia >= elevadores["C"]!.frequencia
}

func elevador_B_eh_o_mais_frequentado(_ elevadores: [String: Elevador])->Bool{
  return  elevadores["B"]!.frequencia >= elevadores["A"]!.frequencia &&
            elevadores["B"]!.frequencia >= elevadores["C"]!.frequencia
}

func elevador_mais_frequentado_e_qual_periodo_tem_maior_fluxo(_ elevadores: [String: Elevador]){

  if elevador_A_eh_o_mais_frequentado(elevadores) {
       print("Elevador mais frequentado é o A!")
       periodo_com_maior_fluxo(elevadores["A"]!.periodo)
  } else if elevador_B_eh_o_mais_frequentado(elevadores) {
       print("Elevador mais frequentado é o B!")
       periodo_com_maior_fluxo(elevadores["B"]!.periodo)
  } else {
       print("Elevador mais frequentado é o C!")
       periodo_com_maior_fluxo(elevadores["C"]!.periodo)
  }
}

func qual_elevador_usou_mais(_ periodo: String,_ elevadores:[String: Elevador]){
  if elevadores["A"]!.periodo[periodo]! >= elevadores["B"]!.periodo[periodo]! && elevadores["A"]!.periodo[periodo]! >= elevadores["C"]!.periodo[periodo]!{
    print("O elevador mais utilizado neste período é o A", terminator: "")
  } else if elevadores["B"]!.periodo[periodo]! >= elevadores["A"]!.periodo[periodo]! && elevadores["B"]!.periodo[periodo]! >= elevadores["C"]!.periodo[periodo]! {
    print("O elevador mais utilizado neste período é o B", terminator: "")
  } else {
    print("O elevador mais utilizado neste período é o C", terminator: "")
  }
}

func periodo_mais_usado_de_todos_e_qual_elevador_pertence(_ elevadores: [String: Elevador]){
  let frequencia_M = elevadores["A"]!.periodo["M"]! + 
                     elevadores["B"]!.periodo["M"]! + 
                     elevadores["C"]!.periodo["M"]!

  let frequencia_V = elevadores["A"]!.periodo["V"]! + 
                     elevadores["B"]!.periodo["V"]! + 
                     elevadores["C"]!.periodo["V"]!                     

  let frequencia_N = elevadores["A"]!.periodo["N"]! + 
                     elevadores["B"]!.periodo["N"]! + 
                     elevadores["C"]!.periodo["N"]!

  if frequencia_M >= frequencia_V && frequencia_M >= frequencia_N {
    print("O período mais usado de todos é o matutino!", terminator: "")
    qual_elevador_usou_mais("M", elevadores)
  } else if frequencia_V >= frequencia_M && frequencia_V >= frequencia_N {
    print("O período mais usado de todos é o vespertino!", terminator: "")
    qual_elevador_usou_mais("V", elevadores)
  } else {
    print("O período mais usado de todos é o noturno!", terminator: "")
    qual_elevador_usou_mais("N", elevadores)
  }
}


struct Elevador{
  var frequencia: Int = 0
  var periodo:[String: Int] = ["M": 0, "V": 0, "N": 0]
}

var elevadores: [String: Elevador] = ["A": Elevador(), 
                                      "B": Elevador(),
                                      "C": Elevador()]

leitura_dos_dados(&elevadores)
elevador_mais_frequentado_e_qual_periodo_tem_maior_fluxo(elevadores)
periodo_mais_usado_de_todos_e_qual_elevador_pertence(elevadores)


print(elevadores["A"]!.frequencia)
print(elevadores["B"]!.frequencia)
print(elevadores["C"]!.frequencia)
