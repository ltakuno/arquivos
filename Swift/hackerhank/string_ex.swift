let name = "Taylor"

for l in name{
  print("Give me a \(l)!")
}

let letter = name[name.index(name.startIndex, offsetBy:3)]
print(letter)

extension String{
   subscript(i: Int)->String{
     return String(self[index(startIndex, offsetBy: i)])
   }

   func deletingPrefix(_ prefix: String) -> String{
     guard self.hasPrefix(prefix) else { return self }
     return String(self.dropFirst(prefix.count))
   }

   func deletingSuffix(_ suffix: String) -> String{
     guard self.hasSuffix(suffix) else { return self }
     return String(self.dropLast(suffix.count))
   }   

   var capitalized: String{
     guard let firstLetter = self.first else { return "" }
     return firstLetter.uppercased() + self.dropFirst()
   }
}

let letter2 = name[3]
print(letter2)

let password = "123456"

print(password.hasPrefix("1234"))

let weather = "it's going to rain"
print(weather.capitalized)
