/*
Criar um programa que leia idade e sexo (0-masculino, 1-feminino) de várias pessoas. Calcule e imprima a idade média, o total de pessoas do sexo feminino com idade entre 30-45 inclusive e o número total de pessoas do sexo masculino. O algoritmo termina quando se digita um número não positivo (0 ou um número negativo) para a idade.
*/


var soma_idades = 0
var total_sexo_feminino_entre_30_45 = 0
var total_sexo_masculino = 0
print("Digite a idade: ", terminator: "")
var idade = Int(readLine()!)!

while (idade > 0){
  soma_idades += idade

  print("Digite a sexo (0-masculino, 1-feminino): ", terminator: "")
  let sexo = Int(readLine()!)!

  if sexo == 1 && idade >= 30 && idade <= 45{
    total_sexo_feminino_entre_30_45 += 1
  }

  if sexo == 0 {
     total_sexo_masculino += 1
  }

  print("Digite a idade: ", terminator: "")
  idade = Int(readLine()!)!
}

print("O total de pessoas do sexo feminino entre 30-45 anos é \(total_sexo_feminino_entre_30_45)")
print("O total de pessoas do sexo masculino é \(total_sexo_masculino)")
