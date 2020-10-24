/*
Escrever um programa que leia um inteiro N, depois leia N números inteiros fornecidos pelo usuário. Após isso, imprima a quantidade de elementos são maiores que 30.
*/
print("Digite o valor de N: ", terminator: "")
var N = Int(readLine()!)!
var contador = 0
while(N > 0){
  print("Digite um número: ", terminator: "")
  let n = Int(readLine()!)!
  if (n > 30){
    contador += 1
  }
  N -= 1
}

print("Quantidade de elementos maiores que 30: \(contador)")

