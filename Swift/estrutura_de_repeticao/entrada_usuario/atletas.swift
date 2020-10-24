/*
Criar um programa que leia um conjunto de informações (nome,
sexo, idade, peso e altura) dos atletas que participaram de uma olimpíada, e informar:

 - O atleta do sexo masculino mais alto;
 - A atleta do sexo feminino mais pesada;
 - A média de idade dos atletas.

 Deverão ser lidos dados dos atletas até que seja digitado o nome @ para um atleta.

*/

var maior_altura: Float = 0
var nome_atleta_mais_alto: String = ""
var soma_das_idades: Int = 0
var maior_peso: Float = 0
var nome_atleta_mais_pesada: String = ""
while true {
  print("Digite o seu nome: ", terminator: "")
  let nome = readLine()!
 
  if nome == "@" {
    break
  }
 
  print("Digite o sexo: ", terminator: "")
  let sexo = readLine()!

  print("Digite a idade: ", terminator: "")
  let idade = Int(readLine()!)!

  print("Digite o peso: ", terminator: "")
  let peso = Float(readLine()!)!

  print("Digite o altura: ", terminator: "")
  let altura = Float(readLine()!)!

  if (sexo == "M" && altura > maior_altura){
    nome_atleta_mais_alto = nome
    maior_altura = altura
  }

  if (sexo == "F" && peso > maior_peso){
    maior_peso = peso
    nome_atleta_mais_pesada = nome
  }

  soma_das_idades += idade
}


print("O atleta do sexo masculino mais alto: \(nome_atleta_mais_alto)")

print("A atleta do sexo feminino mais pesada: \(nome_atleta_mais_pesada)")
print("A média de idade dos atletas: \(soma_das_idades/5)")

