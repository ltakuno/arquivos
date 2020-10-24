import Foundation

func generateRandomNumbers(size: Int) -> [Int]{
   guard size > 0 else {
      return [Int]()
   }
   var result = Array(repeating: 0, count: size)
   for index in 0..<result.count{
      result[index] = Int.random(in: 0..<size)
   }
   return result
} 


func generateRandomNumbers1(size: Int) -> [Int]{
   guard size > 0 else {
      return [Int]()
   }
   let result = Array(repeating: 0, count: size)
   return result.map{_ in Int.random(in: 0..<size)}
} 

func generateUniqueRandomNumbers(size: Int) -> [Int]{
  guard size > 0 else {
      return [Int]()
   }
   return Array(0..<size).shuffled()
}

let array = generateUniqueRandomNumbers(size: 10)
print(array)



public extension Array where Element == Int{

  static func generateRandomNumbers1(size: Int) -> [Int]{
    guard size > 0 else {
        return [Int]()
    }
    let result = Array(repeating: 0, count: size)
    return result.map{_ in Int.random(in: 0..<size)}
  } 

  static func generateUniqueRandomNumbers(size: Int) -> [Int]{
    guard size > 0 else {
        return [Int]()
    }
    return Array(0..<size).shuffled()
  }
}
let arrayRandoInts = Array.generateUniqueRandomNumbers(size: 10)
let uniqueRandomInts =  Array.generateUniqueRandomNumbers(size: 10)
print(arrayRandoInts)
print(uniqueRandomInts)
