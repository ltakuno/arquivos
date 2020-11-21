/*
Divisible Sum Pairs
Hacker Rank

Dado um array de n inteiros, ar = [ar[0], ar[1], ..., ar[n-1]], e um número positivo
k. Encontre e imprima o número de pares (i,j) onde i < j e ar[i]+ar[j] é divisível por k. 

Exemplo: ar = [1,2,3,4,5,6] e k = 5.

Resultado: três pares que atendem ao critério: [1,4], [2,3] e [4,6]

Descrição da função:
Complete a função divisibleSumPairs, o qual deve retornar o número de pares que atendem ao critério do problema.

função: divisibleSumPairs
entrada: 
    - ar: um array de números inteiros 
    - n:  o inteiro que divide a soma de pares 
saída: o número de pares (inteiro) que atendem ao critério do problema
*/


func divisibleSumPairs(_ ar:[Int], _ k: Int) -> Int{
    let x = Array(ar.enumerated()).flatMap{(i: Int, xi: Int) in 
            Array(ar.enumerated()).compactMap{(j: Int, xj: Int) in 
                   return (i, j, xi, xj)
        }}

    return x.filter{$0.0 < $0.1 && ($0.2 + $0.3)%k == 0}
          .map{($0.0, $0.1)}
          .count
}

print(divisibleSumPairs([1,3,2,6,1,2], 3))



