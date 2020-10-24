/*
Escreva um programa que receba a idade de várias pessoas e pare a
execução com a entrada de um número não positivo. O programa deve imprimir:

- O total de pessoas com menos de 21 anos;
- O total de pessoas com mais de 50 anos.

*/

var total_de_pessoas_menores_de_21: Int = 0
var total_de_pessoas_maiores_de_50: Int = 0

while true {
  print("Digite a sua idade: ", terminator: "")
  let idade = Int(readLine()!)!
 
  if idade <= 0 {
    break
  }

  if idade < 21 {
    total_de_pessoas_menores_de_21 += 1
  }

  if idade > 50 {
    total_de_pessoas_maiores_de_50 += 1
  }
}


print("O total de pessoas com menos de 21 anos: \(total_de_pessoas_menores_de_21)")

print("O total de pessoas com mais de 50 anos: \(total_de_pessoas_maiores_de_50)")


