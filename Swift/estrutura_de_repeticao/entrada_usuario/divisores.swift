/*
Escrever um programa que determine todos os divisores de um dado número N.
*/

 
func divisores(_ N: Int) -> [Int] { 
  var resultado = [Int]()

  for n in 1...N {
    if N % n == 0 {
      resultado.append(n)
    }
  } 
  return resultado
}



print("Digite o valor de N: ", terminator: "")
let N = Int(readLine()!)!

print("Os divisores de \(N): \(divisores(N)) ")
