/*
Permutação

https://medium.com/@m.tabrizi/functional-programming-in-swift-7a4def303ec7
*/
func permutations(_ array: [Int]) -> [[Int]] {
    let n = array.count
    var result: [[Int]] = []
    guard n > 0 else { return [[]] }
    
    for i in 0..<n {
        
        let before = Array(array[0..<i])
        let after  = Array(array[i+1..<n])
        
        let lastLevel = permutations(before + after)
        
        result += lastLevel.map { $0 + [array[i]] }
    }
    
    return result
}

print(permutations([1,2,3]))
// [[3, 2, 1], [2, 3, 1], [3, 1, 2], [1, 3, 2], [2, 1, 3], [1, 2, 3]]
