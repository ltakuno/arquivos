import Foundation


// https://www.youtube.com/watch?v=rJcdnAKQLDs

var array1 = ["a", "b", "c", "d", "e"]
var array2 = [1, 2, 3, 4, 5]


// display elements as zipped up together
// for (letter, number) in zip(array1, array2){
//     print("\(letter):  \(number)")
// }



// zip values up into array of tuples
var zipArray = Array(zip(array1, array2))

// print("zipArray", zipArray)


// zip values up into a dictionary

var planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
var moons = [0,0,1,2,67,62,27,14]
var dictionary1: [String: Int] = [:]
for (k, v) in zip(planets, moons){
   dictionary1[k] = v
}

print("dictionary1", dictionary1)

var dictionary2 = Dictionary(uniqueKeysWithValues: zip(planets, moons))
print("dictionary2", dictionary2)

print(dictionary1 == dictionary2)


// zip up word character counts with their words
// remove spaces for color like royal blue, etc

var wordsArrayColors = ["red", "green", "blue", "yellow"]
var charactersCount:[Int] = [] 

for w in wordsArrayColors{
    charactersCount.append(w.count)
}


var dictionary3 = Dictionary(uniqueKeysWithValues: zip(wordsArrayColors, charactersCount))
print("dictionary3", dictionary3)
