/*
Construa um programa que receba um número e verifique se ele é
um número triangular. (Um número é triangular quando é resultado do produto de três números consecutivos. Exemplo: 24 = 2 x 3 x 4)
*/



var n: Int 
var continua: String = "s"
repeat{
  print("Digite um número: ", terminator: "")
  let numero = Int(readLine()!)!
  
  n = 1
  while (n) * (n+1) * (n+2) < numero{
    n += 1
  }

  if (n) * (n+1) * (n+2) == numero{
    print("é triangular:  \(numero) = \(n) x \(n+1) x \(n+2)")
  } else {
    print("não é triangular!")
  }

  print("Deseja continuar (s/n)? ", terminator:"")
  continua = readLine()!
} while continua == "s"
