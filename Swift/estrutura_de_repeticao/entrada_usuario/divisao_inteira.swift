/*
Escrever um programa que calcule o quociente da divisão de A por B (números inteiros e positivos), ou seja, A div B, através de subtracoes sucessivas.

Neste exercício, construa uma função resto() para resolver o problema.
*/

func divisao(_ A: Int,_ B: Int) -> Int {
  var auxiliar = A
  var resultado = 0
  while auxiliar >= B {
      auxiliar -= B
      resultado += 1
  }
  return resultado
}

print("Digite o valor de A: ", terminator: "")
let A = Int(readLine()!)!

print("Digite o valor de B: ", terminator: "")
let B = Int(readLine()!)!

print("O resultado de \(A) div \(B) = \(divisao(A, B)) ")

