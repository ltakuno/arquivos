// Functional programming

// First class functions

func add(_ x: Int) -> (Int) -> Int {
  return {y in y + x} 
}

let addOne = add(1)

print(addOne(2))


func addTwo(_ x: Int) -> Int { 
  return x + 2 
}

print((1...5).map(addTwo))

// Currying
// is the technique of converting a function that takes multiple arguments
// into a function that takes one argument at a time and then returns a function.

func multiply(_ x: Int) -> (Int) -> Int {
  return { $0 * x }
}


print(multiply(3)(4))
print(multiply(3)(multiply(4)(multiply(5)(6))))
print((1...5).map(multiply(2)))

// https://theswiftdev.com/beginners-guide-to-functional-swift/

// parâmetros variádicos
func variadicos(_ blocos:(() -> Void) ... ){
  for bloco in blocos{
    bloco()
  }
}


variadicos( {print("a")}, {print("b")}, {print("c")} )

// trailing closures
variadicos {
  print("trailing closure")
} 

// Box e container
struct Box<T>{
  let value: T
  init(_ value: T){
    self.value = value
  }
}

let x = Box<Int>(360)
print(x.value)

// functors
// functors are containers you can call map on.
extension Box{
  func map<U>(_ transformation: (T)->U) -> Box<U> {
    return Box<U>(transformation(self.value))
  }
}

let y = x.map{ "\($0) degrees"}
print(y.value)

// monads
// monads are container you can call flatmap on.
extension Box{
  func flatmap<U>(_ transformation: (T)->U) -> Box<U> {
    return Box<U>(transformation(self.value))
  }
}

let z = x.flatmap{ Box<String>("\($0) degrees") }
print(z.value)


extension Box {
    func apply<U>(_ transformation: Box<(T) -> U>) -> Box<U> {
        return Box<U>(transformation.value(self.value))
    }
}

let transformation = Box<((Int) -> String)>({ x -> String in
    return "\(x) degrees"
})

let w = x.apply(transformation)
print(w.value)
