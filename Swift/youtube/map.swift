import Foundation

let arrayOfInts = [1,2,3,4,5,6,7,8,9]

let digitNames = [
  0: "Zero", 1 : "One", 2: "Two", 3: "Three", 4: "Four",
  5: "Five", 6 : "Six", 7: "Seven", 8: "Eight", 9: "Nine"
]

let strArray = arrayOfInts.map{ (n: Int) -> String in return digitNames[n] ?? "" }
print(strArray)

