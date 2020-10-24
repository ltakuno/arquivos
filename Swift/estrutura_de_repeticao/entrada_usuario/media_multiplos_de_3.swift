/*
Criar um programa que receba vários números inteiros e positivos e imprima a média dos números múltiplos de 3. A execução deve encerrar quando um
número não positivo for lido. 
*/

var soma: Int = 0
var contador: Int = 0
var n: Int = 0
repeat{
   print("Digite um número: ") 
   n = Int(readLine()!)!

   if (n > 0 && n % 3 == 0){
     soma += n
     contador += 1
   }
  
} while(n > 0)

print("A média dos números múltiplos de 3 é \(soma/contador)")


