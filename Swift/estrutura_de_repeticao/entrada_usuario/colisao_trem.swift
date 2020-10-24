/*
Considere uma linha ferroviária entre São Paulo e Curitiba. Suponha que uma locomotiva (trem) A parte de São Paulo para Curitiba com velocidade de 30 m/s enquanto que uma outra locomotiva B parte de Curitiba para São Paulo no mesmo instante com velocidade de 40 m/s. Considere a distância entre São Paulo e Curitiba de 400 Km. Escreva um programa que calcule iterativamente o tempo necessário para os maquinistas pararem as locomotivas antes que uma colisão aconteça. O algoritmo deve calcular também a distância que as locomotivas devem percorrer para que a colisão aconteça.
*/

var velocidade_trem_A = 30
var velocidade_trem_B = 40
let distancia_SP_CURITIBA = 400000

var distanciaA = 0
var distanciaB = distancia_SP_CURITIBA
var tempo = 0
while distanciaA < distanciaB { 
  distanciaA += 30
  distanciaB -= 40
  tempo += 1
}

print("Tempo para os maquinistas pararem antes da colisão : \(tempo-1)")
print("Distância da locomotiva A: \(distanciaA)")
print("Distância da locomotiva B: \(distancia_SP_CURITIBA - distanciaB)")
