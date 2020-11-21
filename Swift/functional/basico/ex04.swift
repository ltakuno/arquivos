let result = (1...)
    .lazy
    .map { $0 * $0 }
    .first(where: { $0 > 100})

   print(result! as Any)

let results = (1...)
    .lazy
    .map { $0 * $0 }
    .filter { $0 > 100 }
print(Array(results.prefix(10)))

let s = Array(sequence(first: 0, next: {$0 + 1} ).prefix(10))
print(s)


let fibonacci = sequence(state: (0, 1), next: { (state: inout (Int, Int)) -> Int? in
    let next = state.0 + state.1
    state = (state.1, next)
    return next
})
print(Array(fibonacci.prefix(20)))


let fizzbuzz:(Int) -> String = { i in
    switch (i % 3 == 0, i % 5 == 0)
    {
    case (true, false):
        return "Fizz"
    case (false, true):
        return "Buzz"
    case (true, true):
        return "FizzBuzz"
    default:
        return "\(i)"
    }
}

let result = Array(2...20).map(fizzbuzz).reduce("1", { $0 + ", " + $1 })
print(result)



let range = 0 ..< 10
let evens = range.compactMap({ $0 % 2 == 0 ? $0 : nil })
print(evens) // prints [0, 2, 4, 6, 8]



/*
Produto cartesiano
*/

let x = Array(1...10).flatMap{(a: Int) in 
        Array(1...10).flatMap{(b: Int) in
        return [(a,b)] }}

print(x)

print("Produtos cartesianos que não começam por 1 ")
print(x.filter{$0.0 != 1})


import Foundation
// Cartesian product of two arrays
func * (lhs: [Int], rhs: [Int]) -> [(Int, Int)] {
    return lhs.flatMap { l in 
        rhs.map { r in
            return (l, r)
        }
    }
}
let l1 = [1,3,2,6,1,2]
print((l1*l1))



let values = [11, 13, 14, 6, 17, 21, 33, 22]
let even = values.filter { $0.isMultiple(of: 2) }
print(even)

let evens = (0..<10).filter { $0 % 2 == 0 }
print(evens)

let evens1 = Array((0..<10).lazy.filter { $0 % 2 == 0 })
print(evens1)

let evenSquared = (0..<10).filter({ $0 % 2 == 0 }).map({ $0 * $0 })
print(evenSquared)

let sum = (0..<10).reduce(0, +)
print(sum)
print(Array(stride(from: 0, to: 10, by: 2)))
print((0..<10).compactMap({ $0 % 2 == 0 ? $0 : nil }))
print(Array(sequence(first: 0, next:{$0 + 2 < 10 ? $0 + 2 : nil})))


let anySequence = AnySequence<Int>({ () -> AnyIterator<Int> in
    var value = 0
    return AnyIterator<Int> {
        defer { value += 2 }
        return value < 10 ? value : nil
    }
})
// let evens = anySequence.map({ $0 }) // also works
print(Array(anySequence)) // prints [0, 2, 4, 6, 8]

// https://gist.github.com/JadenGeller/24284053c109592883db
