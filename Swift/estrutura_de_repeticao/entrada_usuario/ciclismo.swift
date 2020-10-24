/*
Dois ciclistas A e B estão andando em uma pista de ciclismo com 2 Km de
comprimento com velocidades de 10 m/s e 15 m/s, respectivamente. Escreva um programa que determine iterativamente o tempo que levará para que
esses dois ciclistas A e B se encontrem em um mesmo ponto, sabendo que eles partiram de um mesmo ponto inicial, porém em sentido contrário. O programa também deve calcular o deslocamento (a distância) que cada um percorreu.
*/


var tempo = 0
var distanciaA = 0
var distanciaB = 2000

while distanciaA < distanciaB{
  distanciaA += 10
  distanciaB -= 15
  tempo += 1
}

print("Tempo do encontro: \(tempo) segundos")
print("Ciclista A percorreu \(distanciaA) metros")
print("Ciclista B percorreu \(2000 - distanciaB) metros")
