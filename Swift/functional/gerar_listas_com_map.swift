/*
  Gere as seguintes listas usando map:

  [1,2,4,8,16,32,64,128,256,512,1024,2048,4096]
  [1,2,4,5,7,8,10,11,13,14,16,17,19,20,22,23]

*/
import Foundation

print(Array(0...12).map{ Int(pow(2.0,Double($0))) })
print(Array(0...12).map{ 2 << ($0-1) })

/*
resource: https://stackoverflow.com/questions/24465281/flatten-an-array-of-arrays-in-swift
*/

let xs = Array(stride(from:0, to: 24, by: 3)).map{x in [x+1, x+2]}
print(xs.reduce([], +))
print(Array(xs.joined()))
print(Array(stride(from:0, to: 24, by: 3)).flatMap{x in [x+1, x+2]})


// Usando set
let s1 =  Set(Array(stride(from:0, to: 24, by: 3)))
var s2 =  Set(Array(0...23))
print(s2.subtracting(s1).sorted())



let xs1 = Array(sequence(first: 0, next: {$0 + 3}).prefix(9)).map{x in [x+1, x+2]}

print(xs1)
print(xs1.reduce([], +))
print(Array(xs1.joined()))
print(Array(sequence(first: 0, next: {$0 + 3}).prefix(9)).flatMap{x in [x+1, x+2]})
