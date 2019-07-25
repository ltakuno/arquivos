import Foundation
import QuartzCore

public class BenchTimer{
    public static func measureBlock(closure: () -> Void) -> CFTimeInterval {
        let runCount = 10
        var executionTimes = Array<Double>(repeating: 0.0, count:runCount)
        for i in 0 ..< runCount {
            let startTime = CACurrentMediaTime()
            closure()
            let endTime = CACurrentMediaTime()
            let execTime = endTime - startTime
            executionTimes[i] = execTime
        }
        return (executionTime.reduce(0,+))/Double(runCount)
    }
}



func findTwoSumOptimized(_ array: [Int], target: Int) -> (Int,  Int)? { 
    guard array.count > 1 else {
        return nil
    }

    var diffs = Dictionary<Int, Int>()

    for i in 0..<array.count {
        let left  = array[i]

        let right = target - left

        if let foundIndex = diffs[right] {
            return (i, foundIndex)
        } else { 
            diffs[left] = i
        }
    }

    return nil
}

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


let size =  10
let target  = 4
let maxValue = 4

let array = generateArray(size: size, maxValue: maxValue)

var execTime =  BenchTimer.measureBlock{
    _ = findTwoSum(array, target)
}

print("Average findTwo execution time for \(size) elements: \(execTime.formattedTime)")

var execTime =  BenchTimer.measureBlock{
    _ = findTwoSumOptimized(array, target)
}

print("Average findTwoSumOptimized execution time for \(size) elements: \(execTime.formattedTime)")

