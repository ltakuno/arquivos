/*
Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7000000 de habitantes e uma taxa de natalidade de 2% ao ano, escrever um programa que seja capaz de calcular e iterativamente e no fim imprimir o tempo necessário para que a população do país A ultrapasse a população do país B.
*/

var populacaoA: Float = 5000000.0
var populacaoB: Float = 7000000.0
var anos = 0

while (populacaoA <= populacaoB){
  populacaoA *= 1.03
  populacaoB *= 1.02  
  anos += 1
}

print("A população A ultrapassa a população B em \(anos) anos")
