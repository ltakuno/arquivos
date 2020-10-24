import Foundation

// if let
var optionalNumber: Int?
optionalNumber = 5

if let n = optionalNumber {
   print("Valor : \(n)")
} else {
   print("Valor não atribuido")
}

//guard
func triplo(_ n: Int?){
    guard let n = n else { 
      print("Valor não atribuido")
      return 
    }
    print("o tripo de \(n) é \(3*n)")
}

triplo(optionalNumber)


// force unwrapping
print("\(optionalNumber!)")
let forceNum = optionalNumber!

//optional chaining
struct Device {
  var type: String
  var price: Float
  var color: String
}

var myPhone: Device?
myPhone = Device(type: "Phone", price: 699.00, color: "Space grey")

let devicePrice = myPhone?.price

if let devicePrice = devicePrice { 
   print("Total: \(devicePrice + 8.99) ")
} else {
   print("Valor não atribuido")
}


