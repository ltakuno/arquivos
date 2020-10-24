/*
Desenvolver um programa que efetue a soma de todos os números ímpares
que são múltiplos de três e que se encontram no conjunto dos números 
de 1 até 500
*/
var soma: Int = 0
for n in 1..<500 {
  if (n % 3 == 0){
    soma += n
  }
}

print(soma)


let s = Array(1..<500)
        .filter{$0 % 3 == 0}
        .reduce(0, +)
print(s)
