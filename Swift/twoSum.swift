import Foundation

func findTwoSum(_ array: [Int], target: Int) -> (Int,  Int)? { 
    guard array.count > 1 else {
        return nil
    }

    for i in 0 ..< array.count {
        let left = array[i]
        for j in (i + 1) ..< array.count {
            let right = array[j]
            if left + right == target {
                return (i, j)
            }
        }
    }
    return nil
}

let array = [0,2,2,3,4]
if let indices = findTwoSum(array, target: 4) {
    print(indices)
} else {
    print("No pairs found")
}
