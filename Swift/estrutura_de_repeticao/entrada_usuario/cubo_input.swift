/*
Escrever um programa receba 5 números do usuário de imprima o cubo de cada número 
*/
import Foundation
for _ in 1...5 {
   print("Digite um número: ", terminator: "")
   let n = Float(readLine()!)!
   print(pow(n,3))
}

