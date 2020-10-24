import Foundation

func filterGreaterThanValue(value: Int, numbers:[Int]) -> [Int]{
  var filteredSetOfNumbers = [Int]()
  for n in numbers{
    if n > value {
      filteredSetOfNumbers.append(n)
    }
  }
  return filteredSetOfNumbers
}

print(filterGreaterThanValue(value: 3, numbers:[1,2,3,4,5,6]))

//---------------------------------------------------

func filterWithPredicateClosure(closure: (Int)->Bool, numbers: [Int] )-> [Int] {
  var filteredSetOfNumbers = [Int]()
  for n in numbers{
    if closure(n) {
      filteredSetOfNumbers.append(n)
    }
  }
  return filteredSetOfNumbers
}

let filteredList = filterWithPredicateClosure(closure: { (n) -> Bool in return n > 3 } , numbers: [1,2,3,4,5,6])
print(filteredList)

//---------------------------------------------------

func greaterThanThree(value: Int) -> Bool{
  return value > 3
}

let filteredList1 = filterWithPredicateClosure(closure: greaterThanThree, numbers: [1,2,3,4,5,6])
print(filteredList1)

//---------------------------------------------------
func divisibleByFive(value: Int) -> Bool{
  return value % 5 == 0
}

let filteredList2 = filterWithPredicateClosure(closure: divisibleByFive, numbers: [10,23,35,44,55,65])
print(filteredList2)

//---------------------------------------------------
let arrayOfInts = [1,2,3,4,5,6,7,8,9]
print(arrayOfInts.filter({ $0 > 3 && $0 < 7}))
