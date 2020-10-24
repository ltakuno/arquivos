/*
Escrever um programa que calcule o máximo divisor comum (MDC) entre A e B (números inteiros e positivos).

Esses dois valores devem ser fornecidos pelo usuário.
*/

func mdc(_ a: Int, _ b: Int) -> Int {
  let maior = max(a, b) 
  var resultado: Int = 0
  for n in 1...maior {
     if (a % n == 0 && b % n == 0){
       resultado = n
     }
  }
  return resultado
}


print("Digite o valor de A: ", terminator: "")
let a = Int(readLine()!)!

print("Digite o valor de B: ", terminator: "")
let b = Int(readLine()!)!

print("O MDC entre \(a) e \(b) é \(mdc(a, b)) ")


