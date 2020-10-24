/*
Um cinema possui capacidade de 100 lugares e está sempre com ocupação total.
Certo dia, cada espectador respondeu a um questionário, no qual constava:
- sua idade
- sua opinião em relação ao filme, segundo as seguintes notas

    Nota            |          Significado
--------------------+-------------------------------
     A              |          Ótimo
     B              |          Bom
     C              |          Regular
     D              |          Ruim
     E              |          Péssimo
      
Escreva um programa que, lendo estes dados, calcule e imprima:
- a quantidade de respostas ótimo;
- a diferença entre respostas bom e regular;
- média de idade das pessoas que responderam ruim;
- a percentagem de respostas péssimo e maior idade que utilizou esta opção;
- diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
*/

var idade: Int = 0
var opiniao: String = ""
var quantidade_de_otimo = 0
var quantidade_de_bom = 0
var quantidade_de_regular = 0
var quantidade_de_ruim = 0
var quantidade_de_pessimo = 0
var maior_idade_respostas_pessimo = 0
var soma_idade_respostas_ruim = 0
var maior_idade_respostas_ruim = 0
var quantidade_total_de_pessoas = 0
print("Digite a sua idade: ", terminator: "")
idade = Int(readLine()!)!

while (idade > 0){
  quantidade_total_de_pessoas += 1
  print("Digite a sua opinião: ", terminator: "")
  opiniao = readLine()!

  switch (opiniao){
    case "A":
      quantidade_de_otimo += 1
    
    case "B":
      quantidade_de_bom += 1
    
    case "C":
      quantidade_de_regular += 1

    case "D":  
      quantidade_de_ruim += 1
      soma_idade_respostas_ruim += idade
      if (maior_idade_respostas_ruim == 0) || 
         (idade > maior_idade_respostas_ruim){
        maior_idade_respostas_ruim = idade
      }
    case "E":  
      quantidade_de_pessimo += 1
      if (maior_idade_respostas_pessimo == 0) || 
         (idade > maior_idade_respostas_pessimo){
        maior_idade_respostas_pessimo = idade
      }
    default:
      print("Opinião \(opiniao) inválida!! ") 
  }

   print("Digite a sua idade: ", terminator: "")
   idade = Int(readLine()!)!
}


print("Quantidade de respostas ótimo : \(quantidade_de_otimo)")
print("Diferença entre respostas bom e regular : \(abs(quantidade_de_bom - quantidade_de_regular))")
print("Percentagem de respostas péssimo : \(Float(quantidade_de_pessimo)/Float(quantidade_total_de_pessoas)*100) %")
print("A maior idade da pessoa cuja opinião é péssimo: \(maior_idade_respostas_pessimo)")

print("A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: \(abs(maior_idade_respostas_ruim - maior_idade_respostas_pessimo))")
