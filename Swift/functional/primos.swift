func eh_primo(_ n: Int) -> Bool {
    return Array(1...n).filter{ n % $0 == 0 } == [1,n]
}

print(eh_primo(2))
print(eh_primo(3))
print(eh_primo(4))
print(eh_primo(5))
print(eh_primo(11))
print(eh_primo(12))
print(eh_primo(13))
print(eh_primo(11233))



/*
numeros primos
https://medium.com/@m.tabrizi/functional-programming-in-swift-7a4def303ec7
*/

import Foundation
func primes(n: Int) -> Array<Int> {
    var primes = Set(2..<n)
    primes.subtract(Set(2...Int(sqrt(Double(n)))).flatMap{
        stride(from: 2 * $0, to: n, by: $0)
    })
    return Array(primes).sorted()
}
print(primes(n: 1000))
