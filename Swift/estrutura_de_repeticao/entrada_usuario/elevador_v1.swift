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
*/

var frequencia_A = 0
var frequencia_B = 0
var frequencia_C = 0

var frequencia_A_M = 0
var frequencia_A_V = 0
var frequencia_A_N = 0

var frequencia_B_M = 0
var frequencia_B_V = 0
var frequencia_B_N = 0

var frequencia_C_M = 0
var frequencia_C_V = 0
var frequencia_C_N = 0

for _ in 1...5 {
  print("Qual é o elevador que você utiliza com mais frequência (A, B ou C)? ", terminator: "")
  let elevador = readLine()!
  print("Qual é o período que utiliza o elevador [(M)atutino, (V)espertino, (N)oturno]? ", terminator: "")
  let periodo = readLine()!

  switch(elevador){
    case "A":
      frequencia_A += 1
      switch(periodo){
        case "M":
          frequencia_A_M += 1
        case "V":
          frequencia_A_V += 1
        case "N":
          frequencia_A_N += 1
        default:
          print("periodo inválido!")
      }
    case "B":
      frequencia_B += 1
      switch(periodo){
        case "M":
          frequencia_B_M += 1
        case "V":
          frequencia_B_V += 1
        case "N":
          frequencia_B_N += 1
        default:
          print("periodo inválido!")
      }
    case "C":
      frequencia_C += 1
      switch(periodo){
        case "M":
          frequencia_C_M += 1
        case "V":
          frequencia_C_V += 1
        case "N":
          frequencia_C_N += 1
        default:
          print("periodo inválido!")
      }
    default:
      print("Elevador inválido!")
  }
}


func periodo_que_tem_maior_fluxo(_ frequencia_M: Int,_ frequencia_V: Int, _ frequencia_N: Int){
  if (frequencia_M > frequencia_V) && (frequencia_M > frequencia_N){
    print("O período que se concentra o maior fluxo é o matutino!")
  } else if (frequencia_V > frequencia_M) && (frequencia_V > frequencia_N){
      print("O período que se concentra o maior fluxo é o vespertino!")
  } else {
      print("O período que se concentra o maior fluxo é o noturno!")
  }
}

if (frequencia_A > frequencia_B) && (frequencia_A > frequencia_C){
  print("O elevador mais freqüentado: A")
  periodo_que_tem_maior_fluxo(frequencia_A_M, frequencia_A_V, frequencia_A_N)
} else if (frequencia_B > frequencia_A) && (frequencia_B > frequencia_C){
  print("O elevador mais freqüentado: B")
  periodo_que_tem_maior_fluxo(frequencia_B_M, frequencia_B_V, frequencia_B_N)
} else {
  print("O elevador mais freqüentado: C")
  periodo_que_tem_maior_fluxo(frequencia_C_M, frequencia_C_V, frequencia_C_N)
}


func elevador_com_maior_frequencia(_ frequencia_A: Int, _ frequencia_B: Int, _ frequencia_C: Int){
  if (frequencia_A > frequencia_B) && (frequencia_A > frequencia_C){
  print("O elevador mais freqüentado: A")
  } else if (frequencia_B > frequencia_A) && (frequencia_B > frequencia_C){
    print("O elevador mais freqüentado: B")
  } else {
    print("O elevador mais freqüentado: C")
  }
}

let frequencia_M = frequencia_A_M + frequencia_B_M + frequencia_C_M
let frequencia_V = frequencia_A_V + frequencia_B_V + frequencia_C_V
let frequencia_N = frequencia_A_N + frequencia_B_N + frequencia_C_N

if frequencia_M > frequencia_V && frequencia_M > frequencia_N{
  print("O período mais usado de todos é o matutino!")
  elevador_com_maior_frequencia(frequencia_A_M, frequencia_B_M, frequencia_C_M)
} else if (frequencia_V > frequencia_M) && (frequencia_V > frequencia_N){
  print("O período mais usado de todos é o vespertino!")
} else {
  print("O período mais usado de todos é o noturno!")
}
