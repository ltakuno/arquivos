import Foundation


/*
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example

   s = '12:01:00PM'
   Return '12:01:00'

   s = '12:01:00AM'
   Return '00:01:00'

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

    string s: a time in 12 hour format

Returns

    string: the time in 24 hour format

Input Format

   A single string s that represents a time in 12-hour clock format (i.e.: hh:mm:ssAM or hh:mm:ssPM).

Constraints

   All input times are valid


Sample Input 0

    07:05:45PM


Sample Output 0

    19:05:45


*/

import Foundation

/*
 * Complete the timeConversion function below.
 */
func timeConversion(s: String) -> String {
  let df =  DateFormatter()
  df.dateFormat = "h:mm:ssa"
  guard let date = df.date(from: s) else { return "" }
  df.dateFormat = "HH:mm:ss"
  let date24 = df.string(from: date)
  return date24
}

let fileName = ProcessInfo.processInfo.environment["OUTPUT_PATH"]!
FileManager.default.createFile(atPath: fileName, contents: nil, attributes: nil)
let fileHandle = FileHandle(forWritingAtPath: fileName)!

guard let s = readLine() else { fatalError("Bad input") }

let result = timeConversion(s: s)

fileHandle.write(result.data(using: .utf8)!)
fileHandle.write("\n".data(using: .utf8)!)

