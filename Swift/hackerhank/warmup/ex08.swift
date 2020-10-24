import Foundation


/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to 10^-4 are acceptable.

Example:
arr = [1,1,0,-1,-1]

There are n=5 elements, two positive, two negative and one zero. Their ratios are 2/5 = 0.400000, 2/5 = 0.400000, 1/5 = 0.200000. Results are printed as:

0.400000
0.400000
0.200000

Function Description

Complete the plusMinus function in the editor below.

plusMinus has the following parameter(s):

   int arr[n]: an array of integers


Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with  digits after the decimal. The function should not return a value.

Input Format

The first line contains an integer, n, the size of the array.
The second line contains n space-separated integers that describe arr[n].

Constraints
0 <= n < 100
-100 <= arr[i] <= 100

Output Format

Print the following  lines, each to  decimals:

proportion of positive values
proportion of negative values
proportion of zeros

Sample Input

6
-4 3 -9 0 4 1         

Sample Output

0.500000
0.333333
0.166667

Explanation

There are 3 positive numbers, 2 negative numbers, and 1 zero in the array.
The proportions of occurrence are positive: 3/6 = 0.500000, negative:2/6 = 0.333333  and zeros: 1/6 = 0.166667.

*/

import Foundation

// Complete the plusMinus function below.
func plusMinus(arr: [Int]) -> Void {
   let positive = Double(arr.filter{$0 > 0}.count) / Double(arr.count)
   let negative = Double(arr.filter{$0 < 0}.count) / Double(arr.count)
   let zeros    = Double(arr.filter{$0 == 0}.count) / Double(arr.count)

   let formatter = NumberFormatter()
   formatter.numberStyle = .decimal
   formatter.minimumFractionDigits = 6
   formatter.maximumFractionDigits = 6
   formatter.roundingMode = .halfUp

   print(formatter.string(for: positive)!)
   print(formatter.string(for: negative)!)
   print(formatter.string(for: zeros)!)
}

guard let n = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
else { fatalError("Bad input") }

guard let arrTemp = readLine() else { fatalError("Bad input") }
let arr: [Int] = arrTemp.split(separator: " ").map {
    if let arrItem = Int($0.trimmingCharacters(in: .whitespacesAndNewlines)) {
        return arrItem
    } else { fatalError("Bad input") }
}

guard arr.count == n else { fatalError("Bad input") }

plusMinus(arr: arr)


/* Tests cases

Test01
Input (stdin)
5
0 0 -1 1 1

Expected Output
0.400000
0.200000
0.400000


Test02
Input (stdin)
6
-4 3 -9 0 4 1

Expected Output
0.500000
0.333333
0.166667

Test03
Input (stdin)
7
1 -2 -7 9 1 -8 -5

Expected Output
0.428571
0.571429
0.000000


Test04
Input (stdin)
5
0 4 -3 3 -6

Expected Output
0.400000
0.400000
0.200000

Test05
Input (stdin)
43
55 48 48 45 91 97 45 1 39 54 36 6 19 35 66 36 72 93 38 21 65 70 36 63 39 76 82 26 67 29 24 82 62 53 1 50 47 65 67 19 66 90 77

Expected Output
1.000000
0.000000
0.000000


Test06
Input (stdin)
10
0 100 35 0 94 40 42 87 59 0

Expected Output
0.700000
0.000000
0.300000


Test07
Input (stdin)
72
0 -67 -74 -38 -72 -53 0 -13 -95 -91 -100 -59 0 -10 -68 -71 -62 -21 0 -42 -57 -16 -66 -23 0 -80 -63 -68 -65 -71 0 -71 -15 -32 -26 -8 0 -6 -51 -87 -19 -71 0 -93 -26 -35 -56 -89 0 -21 -74 -39 -57 -8 0 -69 -29 -24 -99 -53 0 -65 -42 -72 -18 -4 0 -73 -46 -63 -78 -87

Expected Output
0.000000
0.833333
0.166667

*/

