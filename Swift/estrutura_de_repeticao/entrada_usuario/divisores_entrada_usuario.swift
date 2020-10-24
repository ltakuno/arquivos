/*
Escreva um programa que receba vários números positivos, e finalize com a entrada do número –999. Para cada número, o algoritmo deve imprimir seus divisores. 
*/

var numero: Int

print("Digite um número: ", terminator: "")
numero = Int(readLine()!)!

while (numero != -999){
  if (numero > 0){
    print("Divisores de \(numero)")
    for n in 1...numero{
      if numero % n == 0{
        print(n)
      }
    }    
  } 
  print("Digite um número: ", terminator: "")
  numero = Int(readLine()!)!
}
