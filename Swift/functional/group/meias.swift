/*Joao trabalha em uma loja de roupas. Ele tem 
uma grande pilha de meias que devem ser pareadas
pela cor para venda. Dado um array de inteiros
representando a cor de cada meia, determine 
quantos pares de meias de uma determinada cor existem.
Ex. n = 7 meias com cores ar = [1,2,1,2,1,3,2].
Existe um par de cor 1 e um par de cor 2. Existem três meias ímpares deixados, uma de cada cor. O número de pares é 2.

*/


func conta_pares(_ v: [Int]) -> Int{
    let d = Dictionary(grouping: v, by: {$0})
    return d.map{ $0.value.count/2 }.reduce(0,+)
}

let v = [1,2,1,2,1,3,2]
print(conta_pares(v))

let v1 = [10,20,20,10,10,30,50,10,20]
print(conta_pares(v1))


