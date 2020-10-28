var evens = [Int]()
for x in 1..<100 where x % 3 == 0 || x % 5 == 0 {
    evens.append(x)
}
print(evens)

print(Array(1..<100).filter{$0 % 3 == 0 || $0 % 5 == 0}) 


// let triangles = (1...10).flatMap { a in
//     (1...10).flatMap { b in
//         (1...10).compactMap { c in
//             return (a, b, c)
//         }
//     }
// }

// print(triangles)

let triangles = (1...10).flatMap { a in
    (1...10).flatMap { b in
        (1...10).compactMap { c in
            return (a, b, c)
        }
    }
    }.filter { tr in
        let isRight = tr.0 * tr.0 + tr.1 * tr.1 == tr.2 * tr.2
        let pSatisfies = tr.0 + tr.1 + tr.2 == 24
        return isRight && pSatisfies
}
print(triangles)


func divisores(_ n: Int) -> [Int]{
  return Array(1...n).filter{n % $0 == 0}
}
func primo(_ n: Int) -> Bool{
  return divisores(n) == [1,n]
}
func primos(_ n:Int)->[Int]{
  return Array(2...n).filter(primo)
}

print(divisores(15))

print(primos(50))



let evens_num = (0 ..< 10).compactMap({ $0 % 2 == 0 ? $0 : nil })
print(evens_num)

let sum = (0..<10).reduce(0, +)
print(sum)

let squares = Array(1...10).map { $0 * $0 }
print(squares) // -> [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

// Zip takes two sequences, like [1,2,3] and [7,8,9], and forms a new sequence by "zipping" them together!
let zipped = Array(zip([1,2,3],[7,8,9]))
print(zipped) // -> [(1, 7), (2, 8), (3, 9)]

let summed = Array(zip([1,2,3],[7,8,9])).map { (a,b) in a + b }
print(summed) // -> [8, 10, 12]


let allSummed = [1,2,3].flatMap { (a: Int) in
                [7,8,9].flatMap { (b: Int) in return [a + b] }}

print(allSummed) // -> [8, 9, 10, 9, 10, 11, 10, 11, 12]

let numbers = Array(1...30)


import Foundation
print(numbers.first!)
print(numbers.dropFirst(1))

func pares(_ v: [Int]) ->[(Int, Int)]{
  return Array(zip(v, Array(v.dropFirst())))
}

print(pares(Array(1...4)))
print(pares([1,1,2,5,4,3]))

func crescente(_ xs: [Int]) -> Bool{
  return pares(xs).map{ $0.0 < $0.1 }.reduce(true){$0 && $1}
}

print(crescente([1,1,2,5,4,3]))
print(crescente(Array(1...4)))


// let learningA = [1,2,3].map /* --> */ { (a: Int) in
//                 [7,8,9].map /* --> */ { (b: Int) in
//                 return [a + b] }}
// print(learningA)


// func indices(_ x: Int,_ v:[Int]) -> [Int]{
//    return Array(zip(Array(0...v.count), v))
//          .compactMap{ (item: (a:Int, b:Int)) -> Int? in 
//                 if item.b == x {return item.a } 
//                 else {return nil}
//           }
// }

// print(indices(3,[1,2,3,4,3,4,3,4]))

// let v = [1,2,3,4,3,4,3,4]
// let x = Array(zip(Array(0...v.count), v)).filter{ $0.1 == 3 }.map{ $0.0 }
// print(x)


func indices<T: Equatable>(_ x: T,_ v:[T]) -> [Int]{
    return Array(zip(Array(0...v.count), v))
          .filter{ $0.1 == x }.map{ $0.0 }
}

print(indices(3,[1,2,3,4,3,4,3,4]))
print(indices("a",["b","a","n","a","n","a"]))


