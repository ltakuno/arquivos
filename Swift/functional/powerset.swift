/*
O powerset de um conjunto S é o conjunto de todos os subconjuntos de S (incluindo o conjunto vazio e o conjunto S). 

ex:
powerset(nums: [1,2,3])

[[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]]

Cada elemento tem a escolha de estar ou não no subconjunto

https://medium.com/@m.tabrizi/functional-programming-in-swift-7a4def303ec7
*/

// func powerset(nums: [Int]) -> [[Int]]{
//     let n = nums.count
//     guard n > 0 else { return [[]] }
//     let head = nums[0]
//     let lastlevel = powerset(nums: Array(nums.dropFirst())) 
//     let thislevel = lastlevel.map{ [head] + $0  }
//     return lastlevel + thislevel 
// }

func powerset(nums: [Int]) -> [[Int]]{
    let n = nums.count
    guard n > 0 else { return [[]] }
    let last = nums[nums.count-1]
    let lastlevel = powerset(nums: Array(nums.dropLast(1))) 
    let thislevel = lastlevel.map{$0 + [last]}
    return lastlevel + thislevel
}


print(powerset(nums:[1,2,3]))




