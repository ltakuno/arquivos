import Foundation

var myStr = "Hello there"

print(myStr.count)

myStr += "5"
myStr += "\(5)"

let idx = myStr.index(myStr.startIndex, offsetBy: 1)
myStr.insert("5", at: idx)
print(myStr)


let idx2 = myStr.index(myStr.startIndex, offsetBy: 3)
print(myStr[idx2])

myStr.remove(at: idx)
print(myStr)




import Foundation

func timeConversion(s: String) -> String {
  let df =  DateFormatter()
  df.dateFormat = "h:mm:ssa"
  guard let date = df.date(from: s) else { return "" }
  df.dateFormat = "HH:mm:ss"
  let date24 = df.string(from: date)
  return date24
}

print(timeConversion(s: "07:05:45PM"))

let angle = 45.6789
let formatted = String(format: "%.2f", angle)

print(formatted)
