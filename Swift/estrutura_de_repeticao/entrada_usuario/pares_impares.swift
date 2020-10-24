/*
Escrever um programa que leia um inteiro N, após isso, receba N números inteiros fornecidos pelo
usuário, e então conte e mostre quantos números lidos foram pares e quantos foram ímpares.
*/

print("Digite o valor de N: ", terminator: "")
var N = Int(readLine()!)!
var pares: Int = 0
var impares: Int = 0

while (N > 0){
   print("Digite um número : ", terminator: "")
   let n = Int(readLine()!)!
   if (n % 2 == 0){
      pares += 1
   } else {
     impares += 1
   }
   N -= 1
}
print("Quantidade de números pares: \(pares)")
print("Quantidade de números ímpares: \(impares)")

