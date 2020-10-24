/*
A série de Fibonacci é formada pela sequência.

 1, 1, 2, 3, 5, 8,13,21,34,55..
 1  2  3  4  5  6  7  8  9  10
Escreva um programa que gere a série de Fibonacci até o N-ésimo termo.

*/


func mostrar_serie_fibonacci(_ N: Int){
     var e1: Int = 1
     var e2: Int = 1
     var prox: Int = 2
     var n = N
     while (n > 0){
       print(e1)
       e1 = e2
       e2 = prox
       prox = e2 + e1
       n -= 1
     }
}

print("Digite o valor de N: ", terminator: "")
let n = Int(readLine()!)!

mostrar_serie_fibonacci(n)


