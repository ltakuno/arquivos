/*
Escrever um programa que leia um inteiro N, e então imprima todos os múltiplos de 3 ou múltiplos de 5, no intervalo de 1 até N.
*/

print("Digite o valor de N: ", terminator: "")
var N = Int(readLine()!)!

// for n in 1...N { 
//   if n % 3 == 0 || n % 5 == 0 {
//     print(n)
//   }
// }

_ = Array(1...N)
   .filter{ $0 % 3 == 0 || $0 % 5 == 0 }
   .map{ print($0) }
