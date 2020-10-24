/*
Escrever um programa que calcule o resto da divisão de 
A por B (números inteiros e positivos), ou seja, 
A mod B, através de subtracoes sucessivas.

Neste exercício, construa uma função resto() para resolver o problema.
*/

func resto(_ A: Int,_ B: Int) -> Int {
  var resultado = A
  
  while resultado >= B {
      resultado -= B
  }
  return resultado
}

print("Digite o valor de A: ", terminator: "")
let A = Int(readLine()!)!

print("Digite o valor de B: ", terminator: "")
let B = Int(readLine()!)!

print("O resultado de \(A) mod \(B) = \(resto(A, B)) ")

