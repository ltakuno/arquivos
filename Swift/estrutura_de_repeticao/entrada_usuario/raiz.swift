/*
 Criar um programa que receba 10 números positivos e imprima a raiz quadrada de cada número. Para cada entrada de dados deverá haver um trecho de
 proteção para que um número negativo não seja aceito. 
*/
import Foundation
var n: Float
for _ in 1...10 {
  repeat{
    print("Digite um número positivo: ")
    n = Float(readLine()!)!

    if n < 0{
      print("Número inválido! Digite novamente!")
    }
  } while n < 0
  
  print("A raiz quadrada de \(n) é \(sqrt(n))")
}


