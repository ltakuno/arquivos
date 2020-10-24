/*
Escrever um programa que calcule o fatorial de um número N, cujo valor é obtido através do usuário. 
*/


func fatorial(_ N: Int) -> Int {
  var resultado = 1
  for i in 1...N {
    resultado *= i
  }
  return resultado
}


print("Digite o valor de N: ", terminator: "")
let N = Int(readLine()!)!

print("O fatorial de \(N): \(fatorial(N)) ")

