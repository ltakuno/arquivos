/*
Escreva um programa que leia 10 fichas, cada
uma contendo, a altura e o sexo de uma
pessoa, e calcule e imprima:
- a maior e menor altura da turma
- a média das alturas das mulheres
- a média de altura da turma 
*/

var maior: Float = 0
var menor: Float = 0
var soma_altura_turma: Float = 0
var soma_altura_mulheres: Float = 0
var cont_mulheres: Int = 0

for _ in 1...10 {
  print("Digite a altura: ", terminator: "")
  let altura = Float(readLine()!)!
  print("Digite sexo: ", terminator: "")
  let sexo = readLine()!

  if maior == 0 && menor == 0{
    maior = altura
    menor = altura
  } else if altura > maior {
    maior = altura
  } else if altura < menor {
    menor = altura
  }
   
  if sexo == "F"{
    soma_altura_mulheres += altura
    cont_mulheres += 1
  } 

  soma_altura_turma += altura
}

print("Maior altura: \(maior)")
print("Menor altura: \(menor)")
print("Média de altura das mulheres: \(soma_altura_mulheres/Float(cont_mulheres))")
print("Média de altura das mulheres: \(soma_altura_turma/10.0)")

