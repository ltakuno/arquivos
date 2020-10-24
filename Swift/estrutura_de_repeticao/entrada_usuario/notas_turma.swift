/*
Os alunos de informática tiveram cinco provas (uma de cada matéria/disciplina): 1, 2, 3, 4 e 5. Considere aprovado o aluno com nota igual ou superior a 7.0. Criar um programa que leia o Nome dos alunos e as suas respectivas cinco notas. Inicialmente o algoritmo deve perguntar quantos alunos existem na turma e deve também imprimir:

- Nome dos que foram aprovados em todas as matérias;
- Nome dos alunos aprovados nas matérias 1 e 4;
- A porcentagem dos aprovados na matéria 3.
*/
print("Quantos alunos existem na turma?")
var numero_de_alunos = Int(readLine()!)!
var notas: [Float] = [0.0, 0.0, 0.0, 0.0, 0.0]
var alunos_que_passaram_em_todas: [String] = [String]()
var alunos_que_passaram_em_1_e_4: [String] = [String]()
var total_de_alunos_que_passaram_na_materia_3 = 0

for _ in 1...numero_de_alunos {
  print("Digite o nome do aluno: ", terminator: "")
  let nome = readLine()!

  var passou_em_todas: Bool = true
  for i in 0...4 {
    print("Digite a nota \(i+1): ", terminator: "")
    notas[i] = Float(readLine()!)!
    passou_em_todas = passou_em_todas && notas[i] >= 7.0
  }

  if passou_em_todas {
    alunos_que_passaram_em_todas.append(nome)
  }

  if notas[0] >= 7.0 && notas[3] >= 7.0 {
     alunos_que_passaram_em_1_e_4.append(nome)
  }

  if notas[2] >= 7.0 {
    total_de_alunos_que_passaram_na_materia_3 += 1
  }
}

print("Alunos que passaram em todas as matérias: ")
print(alunos_que_passaram_em_todas)


print("Alunos que passaram nas matérias 1 e 4: ")
print(alunos_que_passaram_em_1_e_4)

print("Percentual de alunos que passaram na matéria 3: ")
print(Float(total_de_alunos_que_passaram_na_materia_3) / Float(numero_de_alunos) * 100.0)

