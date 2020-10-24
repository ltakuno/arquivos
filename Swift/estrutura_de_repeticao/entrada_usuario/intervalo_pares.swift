/*
Escrever um programa que leia os valores de inicio e fim de um intervalo e imprima todos os números pares nesse intervalo e o seu somatório. Apresente
os número em ordem crescente.
*/
print("Digite o valor do início do intervalo: ")
var inicio = Int(readLine()!)!
print("Digite o valor do fim do intervalo: ")
var fim = Int(readLine()!)!

if inicio > fim {
  (inicio, fim) = (fim, inicio)
}

var somatorio: Int = 0

for n in inicio...fim {
  if n % 2 == 0 {
    print(n)
    somatorio += n
  }
}

print("O somatório é \(somatorio)")
