/*
Escrever um programa que determine se dois valores
positivos A e B são primos entre si. (dois números
são ditos primos entre si, caso não exista divisor
comum aos dois números). 
*/

func primos_entre_si(_ A: Int,_ B: Int) -> Bool {
  let maior = max(A,B)
  for n in 2...maior{
    if A % n == 0 && B % n == 0 {
      return false
    }
  }
  return true
}

print("Digite o valor de A: ", terminator: "")
let A = Int(readLine()!)!

print("Digite o valor de B: ", terminator: "")
let B = Int(readLine()!)!

print("\(A) e \(B) são primos entre si? \(primos_entre_si(A, B)) ")
