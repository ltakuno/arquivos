let numbers = ["5", "42", "nine", "100", "Bob"]
let result = numbers.compactMap({ Int($0) })

print(result)

let d = ["a":1, "b": nil]
print(d.compactMap{$0})


let arr = [1,nil, 3, 4, nil]
print(arr.map{$0})



