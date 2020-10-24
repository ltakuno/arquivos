/*
Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano. Construir um programa que calcule iterativamente e imprima quantos anos serão necessários para que Juca seja maior que Chico.
*/

var altura_Chico: Float = 1.50
var altura_Juca: Float = 1.10
var anos = 0

while (altura_Juca <= altura_Chico){
  altura_Juca += 0.03 
  altura_Chico += 0.02 
  anos += 1
}

print("Serão necessários \(anos) anos para que Juca seja maior que Chico!")


