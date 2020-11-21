// https://theswiftdev.com/beginners-guide-to-functional-swift/

let numbers = Array(0...10)
print(numbers.map{$0 * 10})
print(numbers.map(String.init))

// dictionary
let params: [String: Any] = [
  "sort": "name",
  "order": "desc",
  "limit": 20,
  "offset": 2,
]

import Foundation

// mapValues is basically map for the dictionary values
let queryItems = params.mapValues {"\($0)"}
                        .map(URLQueryItem.init)

print(queryItems)

// set
let fruits = Set<String>(arrayLiteral: "apple", "banana", "pear")
print(fruits.map { $0.capitalized })

var xs = [1,5,2,3,4]

xs.sort(by: <)
print(xs)

enum Fruit: String {
  case Apple = "apple"
  case Banana = "banana"
  case Cherry = "cherry"
}

print(Fruit.Apple.rawValue)

func fff(_ x: Int?){
  guard let x = x else {
    print("nulo!")
    return
  }

  print(x)
}

var xxx: Int?
fff(xxx)


let scores = [2, 23, 8, 5]
print(scores.reduce(0, +))
