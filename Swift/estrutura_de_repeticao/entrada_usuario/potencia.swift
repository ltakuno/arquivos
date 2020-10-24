/*
Escrever um programa que realize a potencia de A por B, ou seja A^B, através de multiplicações. Esses dois valores são informados pelo usuário através do teclado.

Neste exercício, construa uma função potencia() para resolver o problema.
*/

func potencia(_ A: Int,_ B: Int) -> Int {
  var resultado = 1
  for _ in 1...B{
      resultado *= A
  }
  return resultado
}

print("Digite o valor de A: ", terminator: "")
let A = Int(readLine()!)!

print("Digite o valor de B: ", terminator: "")
let B = Int(readLine()!)!

print("O resultado de \(A) * \(B) = \(potencia(A, B)) ")

