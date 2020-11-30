let codes = [["abc","def", "ghi"], ["abc", "def", "ghi"]]
let newcodes = codes.flatMap{ $0.map{$0.uppercased()}}
print(newcodes)
//["ABC", "DEF", "GHI", "ABC", "DEF", "GHI"]


let codes1 = ["abc","def", "ghi"]
let newcodes1 = codes1.flatMap{ $0.uppercased() }
print(newcodes1)
// ["A", "B", "C", "D", "E", "F", "G", "H", "I"]

