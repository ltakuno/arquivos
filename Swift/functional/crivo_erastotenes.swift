/*
Crivo de Erastotesnes
https://medium.com/@m.tabrizi/functional-programming-in-swift-7a4def303ec7

*/


func SieveOfEratosthenes(_ limit: Int) -> [Int] {
    guard limit > 1 else { return [] }
    
    var primes = Array(repeating: true, count: limit)
    (primes[0], primes[1]) = (false, false)
    
    
    for j in 2..<primes.count where primes[j] {
        var k = 2
        while k*j < primes.count {
            primes[k*j] = false
            k += 1
        }
    }
    
    return primes.enumerated().compactMap { (index: Int, element: Bool) -> Int? in
        return element ? index : nil
    }
}

print(SieveOfEratosthenes(100))
