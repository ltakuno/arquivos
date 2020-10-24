/*
Escrever um programa receba 5 números do usuário de imprima a raiz quadrada de cada número 
*/
import Foundation
for _ in 1...5 {
   print("Digite um número: ", terminator: "")
   let n = Float(readLine()!)!
   print(sqrt(n))
}

