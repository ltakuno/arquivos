/*
Escreva um programa que receba vários números e verifique se eles são ou não quadrados perfeitos. O algoritmo termina a execução quando for digitado
um número menor ou igual a 0. (Um número é quadrado perfeito quando tem um
número inteiro como raiz quadrada.) 
*/
import Foundation 
func eh_quadrado_perfeito(_ n: Int) -> Bool {  
  let raiz = Int(sqrt(Float(n)))
  return n == raiz*raiz
}

func main(){
  while true {
    print("Digite um número: ", terminator: "")
    let n = Int(readLine()!)!

    if (n <= 0){
      break
    }
    if eh_quadrado_perfeito(n){
      print("O número \(n) é quadrado perfeito")
    } else {
      print("O número \(n) não é quadrado perfeito")
    }
    
  }
}

main()

