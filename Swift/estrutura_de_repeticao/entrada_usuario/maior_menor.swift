/*
Escrever um programa receba 5 números positivos do usuário de imprima o maior e menor deles
*/
import Foundation

var maior: Int
print("Digite um número positivo: ", terminator: "")
maior = Int(readLine()!)!
var menor: Int = maior

for _ in 1...4 {
   print("Digite um número positivo: ", terminator: "")
   let n = Int(readLine()!)!
   if (n > maior){
     maior = n
   } else if (n < menor) {
     menor = n
   }
}

print("O maior número: \(maior)")
print("O menor número: \(menor)")

