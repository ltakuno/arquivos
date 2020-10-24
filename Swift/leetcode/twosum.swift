import Foundation

// Return a Boolean if there are 2 numbers in the array that equal a sum
let numbers = [1, 3, 6, 7, 7, 12, 14]


// 1. Brute force - Nested for-loop compare all (n^2)
func bruteForceTwoSum(array: [Int], sum: Int) -> Bool {
   for i in 0..<array.count{
      for j in 0..<array.count where j != i{
         if array[i] + array[j] == sum {
             print("True: \(array[i]) + \(array[j])")
             return true
         } else {
             print("False: \(array[i]) + \(array[j])")
         }
      }
   }
   return false
}

//print(bruteForceTwoSum(array: numbers, sum: 23))


let numbers2 = [1, 3, 6, 7, 7, 12, 14]


func binarySearch(array: [Int], key: Int) -> Bool {
   var i = 0
   var f  = array.count-1
   while i <= f { 
      let m = (i + f)/2
      if (array[m] == key){
         return true
      } else { 
         if (key < array[m]){
            f = m - 1
         } else {
            i = m + 1
         }
      }
   }
   return false
}

// 2. Binary Search for compliment (because it's sorted) - n log n
func twoSumBinarySearch(array: [Int], sum: Int) -> Bool {
   if array.count == 0 { return false }

   for i in 0 ..< array.count {
      let compliment = sum - array[i]
      var tempArray = array 
      tempArray.remove(at: i)
      let hasCompliment = binarySearch(array: tempArray, key: compliment)
      print("num: \(array[i]) - \(hasCompliment)")
      if hasCompliment == true {
         print("true - num: \(array[i]), compliment: \(compliment)")
         return true
      }
   } 
   return false
}

print(twoSumBinarySearch(array: numbers2, sum: 10))

let numbers3 = [1, 3, 6, 7, 7, 12, 14]

// 3. Move pointer from either end - linear

func twoSumPointer(array: [Int], sum: Int) -> Bool {
   var lowIndex = 0
   var highIndex = array.count - 1

   while lowIndex < highIndex {
       let sumOfItems = array[lowIndex] + array[highIndex]
       if sumOfItems == sum {
           print("Sum of \(array[lowIndex]) and \(array[highIndex]) = \(sum)") 
           return true
       } else if sumOfItems < sum { 
           lowIndex += 1
       } else if sumOfItems > sum { 
           highIndex -= 1
       }
       
   }
   return false
}


print(twoSumPointer(array: numbers3, sum: 10))


let numbers4 = [1, 3, 6, 7, 7, 12, 14]

// 4. Using Dictionary

func twoSumUsingDictionary(array: [Int], sum: Int) -> Bool{
   var map: [Int: Int] = [:]
   for i in 0..<array.count {
      if  map[sum - array[i]] != nil {
          return true
      }
      map[array[i]] = i
   }
   return false
}

print(twoSumUsingDictionary(array: numbers4, sum: 10))

