/*
Escreva um programa que receba vários números inteiros e imprima
a quantidade de números primos dentre os números que foram digitados. O algoritmo acaba quando se digita um número menor ou igual a 0. 
*/

func eh_primo(_ numero: Int) -> Bool {
  var contador: Int = 0
  for n in 1...numero {
    if (numero % n == 0){
      contador += 1
    }
      
  }
  return (contador == 2)
}

func main(){

  var contador: Int = 0
  var n: Int = 0
  repeat{
   print("Digite um número: ") 
   n = Int(readLine()!)!

   if (n > 0 && eh_primo(n)){
     contador += 1
   }
  
  } while(n > 0)

  print("A quantidade de números primos é \(contador)")
}

main()
