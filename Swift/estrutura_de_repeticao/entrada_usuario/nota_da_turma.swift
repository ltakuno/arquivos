/*
Numa universidade, os alunos das turmas de informática fizeram uma prova de
algoritmos. Cada turma possui um número de alunos. Criar um programa que imprima para cada turma:
- Quantidade de alunos aprovados;
- Média de cada turma;
- Percentual de reprovados.
Considere aprovado aluno com nota igual ou superior a 7.0. O programa deve ler o
número de alunos de cada turma e só finalizar o programa quando um número não
positivo de alunos for digitado.
*/


while true{
  print("Digite o número de alunos da turma:")
  let numero_alunos = Int(readLine()!)!
  if numero_alunos <= 0 {
    break
  }

  var alunos_aprovados: Int = 0
  var alunos_reprovados: Int = 0
  var soma_notas: Float = 0

  for n in 1...numero_alunos{
    print("Digite a nota do \(n)o. aluno")
    let nota = Float(readLine()!)!
    soma_notas += nota
    if nota >= 7.0 {
      alunos_aprovados += 1
    } else {
      alunos_reprovados += 1
    }
  }
  
  print("Quantidade de alunos aprovados: \(alunos_aprovados)")
  print("Média da turma: \(soma_notas/Float(numero_alunos))")
  print("Percentual de reprovados: \(Float(alunos_reprovados)/Float(numero_alunos)*100.0)%")
}

