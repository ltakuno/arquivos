/*
Escrever um programa que realize o produto entre os números A e B, ou seja A * B, através de somas. Esses dois valores são informados pelo usuário através do teclado.   
*/
print("Digite o valor de A: ", terminator: "")
let A = Int(readLine()!)!

print("Digite o valor de B: ", terminator: "")
let B = Int(readLine()!)!

var resultado = 0

for _ in 1...A {
   resultado += B 
}

print("O resultado de \(A) * \(B) = \(resultado) ")
