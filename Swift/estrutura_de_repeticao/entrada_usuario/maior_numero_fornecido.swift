/*
 Escreva um programa que receba vários números e ao final imprima o maior número digitado. O programa acaba quando se digita –9999; 
*/

var numero: Int
var maior: Int 

  print("Digite um número: ", terminator: "")
  numero = Int(readLine()!)!
  maior = numero


while numero != -9999 {
  print("Digite um número: ", terminator: "")
  numero = Int(readLine()!)!
  maior = max(numero, maior)
} 

print("O maior número digitado foi: \(maior)")
 
