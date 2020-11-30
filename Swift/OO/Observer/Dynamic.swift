class Dynamic<T> {
  var value: T {
    didSet {
       for bondBox in bonds {
         bondBox.bond?.listener(value)
       }
    }
  }
  var bonds: [BondBox<T>] = []

  init(_ v: T) {
    value = v
  }
}

class BondBox<T> {
  weak var bond: Bond<T>?
  init(_ b: Bond<T>) { bond = b }
}


class Bond<T> {
  typealias Listener = (T) -> Void
  var listener: Listener

  init(_ listener: @escaping Listener) {
    self.listener = listener
  }

  func bind(dynamic: Dynamic<T>) {
    dynamic.bonds.append(BondBox(self))
  }
}

var name = Dynamic<String>("Leo")


let observador1 = Bond<String>( {(name:String)->Void in print("Observador1: \(name)") })
let observador2 = Bond<String>( {(name:String)->Void in print("Observador2: \(name)") })

observador1.bind(dynamic: name)
observador2.bind(dynamic: name)

name.value = "Leo"
name.value = "Pedro"
name.value = "Credo"


