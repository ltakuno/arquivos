// Functors
// functor é um tipo de dados que implementa
// a função map. Como Optional, Collection, 
// Result type em Swift
enum Box<T> {
    case some(T)
    case empty
}

extension Box where T == Int {
    func add(_ value: Int) -> Box<Int> {
        switch self {
        case .some(let t):
            return .some(t + value)
        case .empty:
            return .empty
        }
    }
}

let intBox: Box<Int> = .some(7)
let result: Box<Int> = intBox.add(3)

// Functor applies a function to a wrapped value
extension Box {
    func map<U>(_ f: @escaping (T) -> U) -> Box<U> {
        switch self {
        case .some(let t):
            return .some(f(t))
        case .empty:
            return .empty
        }
    }
}

// Applicative applies wrapped function to a wrapped value
extension Box {
    func apply<U>(_ f: Box<((T) -> U)>) -> Box<U> {
        switch f {
        case .some(let transform):
            return self.map(transform)
        case .empty:
            return .empty
        }
    }
}

// Monad applies a function that returns wrapped value to a wrapped value
extension Box {
    func flatMap<U>(_ f: (T) -> Box<U>) -> Box<U> {
        switch self {
        case .some(let t):
            return f(t)
        case .empty:
            return .empty
        }
    }
}
