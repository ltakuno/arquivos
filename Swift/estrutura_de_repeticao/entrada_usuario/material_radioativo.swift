/*
Na usina de Angra dos Reis, os técnicos analisam a perda de massa de um material radioativo. Sabendo-se que este perde 25% de sua massa a cada 30 segundos. Criar um programa que calcule iterativamente e imprima o tempo necessário para que a massa deste material se torne menor que 0,10 grama. O programa pode calcular o tempo para várias massas.
*/

var resposta: String
repeat{
  print("Digite o peso do material (em gramas): ")
  var massa = Float(readLine()!)!

  var tempo = 0

  while massa >= 0.1 {
    massa *= 0.75
    tempo += 30
  }

  print("O tempo necessário para que a massa deste material se torne menor que 0,10 gramas é \(tempo) segundos")

  print("Deseja analisar outro material [S/N]: ")
  resposta = readLine()!
} while (resposta == "S")

