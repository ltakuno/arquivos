/*
Criar um programa que leia vários números inteiros e apresente o fatorial de cada número. O algoritmo deve finalizar quando um número menor do que
1 é digitado. 
*/

func fatorial(_ n: Int) -> Int {  
   return Array(1...n).reduce(1, *)
}

func main(){
  while true {
    print("Digite um número: ", terminator: "")
    let n = Int(readLine()!)!

    if (n <= 0){
      break
    }
    print("O fatorial de \(n) é \(fatorial(n))")
  }
}

main()
