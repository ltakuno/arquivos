import Foundation


// https://www.youtube.com/watch?v=mWKYpRxjhJs&list=RDCMUCbTw29mcP12YlTt1EpUaVJw&index=9


var ages:[Int] = [21, 55, 19, 47, 22, 37, 88, 71]

print(ages.count)

print(ages.first ?? "empty")
print(ages.last ?? "empty")

print(ages[0])
print(ages[3])

ages.append(99)
ages.insert(44, at: 0)
ages.sort()
print(ages)

ages.reverse()
print(ages)

ages.shuffle()
print(ages)


