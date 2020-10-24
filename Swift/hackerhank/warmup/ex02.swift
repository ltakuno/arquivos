import Foundation


/*
Given an array of integers, find the sum of its elements.

 For example, if the array ar=[1,2,3], 1+2+3=6, so return 6.

 Function Description

  Complete the simpleArraySum function in the editor below. It must return the sum of the   array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
Input Format

  The first line contains an integer, , denoting the size of the array.
  The second line contains  space-separated integers representing the array's elements.

Constraints
0 < n, ar[i] <= 1000

Output Format

  Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11

Sample Output

31

Explanation

We print the sum of the array's elements: 
1 + 2 + 3 + 4 + 10 +11 = 31 
*/

/*
 * Complete the simpleArraySum function below.
 */
func simpleArraySum(ar: [Int]) -> Int {
    return ar.reduce(0, +)
}

let stdout = ProcessInfo.processInfo.environment["OUTPUT_PATH"]!
FileManager.default.createFile(atPath: stdout, contents: nil, attributes: nil)
let fileHandle = FileHandle(forWritingAtPath: stdout)!

guard let arCount = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
else { fatalError("Bad input") }

guard let arTemp = readLine() else { fatalError("Bad input") }
let ar: [Int] = arTemp.split(separator: " ").map {
    if let arItem = Int($0.trimmingCharacters(in: .whitespacesAndNewlines)) {
        return arItem
    } else { fatalError("Bad input") }
}

guard ar.count == arCount else { fatalError("Bad input") }

let result = simpleArraySum(ar: ar)

fileHandle.write(String(result).data(using: .utf8)!)
fileHandle.write("\n".data(using: .utf8)!)

