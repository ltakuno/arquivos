/*
Escrever um programa receba 5 números positivos do usuário de imprima o maior deles
*/
import Foundation

var maior: Int
print("Digite um número positivo: ", terminator: "")
maior = Int(readLine()!)!

for _ in 1...4 {
   print("Digite um número positivo: ", terminator: "")
   let n = Int(readLine()!)!
   if (n > maior){
     maior = n
   }
}
print("O maior número: \(maior)")

