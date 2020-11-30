import Foundation

/* transducer 
https://www.youtube.com/watch?v=estNbh2TF3E
https://github.com/mkchoi212/Transducers/blob/master/Transducers.playground/Contents.swift
*/

extension Int {
    func square() -> Int {
        return self * self
    }

    func incr() -> Int {
        return self + 1
    }
}

print(3.square().incr())

var xs = Array(1...10)

func square (_ x: Int) -> Int {
    return x * x
}

func incr (_ x: Int) -> Int {
    return x + 1 
}

func isEven(_ x: Int) -> Bool {
    return x % 2 == 0
}

func double(_ x: Int) -> Int {
    return x * 2
}

print((1...10).map(incr).filter(isEven))


print(xs.map{square($0)})


precedencegroup OperatorPrecedence {
    associativity: left
}

infix operator >>= :  OperatorPrecedence
func >>= <A, B> (x: A, f: @escaping (A) -> B) -> B {
    return f(x)
}

func >>= <A, B, C> (f: @escaping (A) -> B,  g: @escaping (B) -> C) -> ((A) -> C) {
    return { a in 
        return g(f(a))
    }
}


let x = 3 >>= square >>= incr
print(x)

 func map <A, B> (_ f: @escaping (A) -> B ) -> ([A]) -> [B]{
     return {xs in 
        return xs.map{ f($0) }
     }
 }

print(xs >>= map(square) >>= map(incr))
print(xs >>= map(square >>= incr))

func filter <A> (_ p: @escaping (A) -> Bool)-> ([A]) -> [A]{
    return {xs in xs.filter(p)}
}

func isPrime (p: Int) -> Bool{
    if p <= 1 {return false}
    if p <= 3 {return true}
    for i in 2 ... Int(sqrt(Float(p))){
        if p % i == 0 {return false}
    }
    return true
}

print(xs >>= map(square) >>= map(incr) >>= filter(isPrime))


func map_from_reduce <A, B> (_ f: @escaping (A) -> B) -> ([A]) -> [B]{
    return { xs in 
        return xs.reduce([]) {accum, x in 
            return accum + [f(x)]
        }
    }
}

func filter_from_reduce <A> (_ p: @escaping (A) -> Bool) -> ([A]) -> [A]{
    return {xs in 
          return xs.reduce([]){ accum, x in 
               return p(x) ? accum + [x] : accum 
        }
    }
}

func take_from_reduce <A> (_ n: Int) -> ([A]) -> [A]{
    return { xs in 
        return xs.reduce([]){ accum, x in 
            return accum.count < n ? accum + [x] : accum
        }
    }
}

print(Array(1...10) >>= take_from_reduce(3))

func flatten_from_reduce <A> (_ xss: [[A]]) -> [A]{
    return xss.reduce([]){ accum, x in 
        return accum + x
    }
}

let xss = [[1,2,3], [4,5,6], [7,8,9]]
print (xss >>= flatten_from_reduce)


// Tranducer (example)
func squaringTransducer <C>(_ reducer: @escaping (C, Int) -> C) -> ((C, Int) -> C){
    return {accum, x in 
        return reducer(accum, x*x)
    }
}

print(xs.reduce(0, +))
print(xs.reduce(0, squaringTransducer(+)))

func append<T>(to accum: [T], with input: T) -> [T] {
    return accum + [input]
}

extension Collection {
    typealias A = Iterator.Element
    
    func mmap<B>(_ f: @escaping (A)->(B)) -> [B] {
        return reduce([]) { accum, elem in
            append(to: accum, with: f(elem))
        }
    }
    
    func mfilter(_ p: @escaping (A) -> (Bool)) -> [A] {
        return reduce([]) { accum, elem in
            return p(elem) ? append(to: accum, with: elem) :  accum
        }
    }
}

print((1...10).mmap(incr).mfilter(isEven))

func mapping <A, B, C> (_ f: @escaping (A) -> (B)) -> (@escaping ((C, B) -> (C))) -> (C, A) -> (C) {
    return { reducer in
        return { accum, input in
            reducer(accum, f(input))
        }
    }
}

func filtering<A, C> (_ p: @escaping (A) -> (Bool)) -> (@escaping ((C, A) -> (C))) -> (C, A) -> (C) {
    return { reducer in
        return { accum, input in
            return p(input) ? reducer(accum, input) : accum
        }
    }
}

func add(l: Int, r: Int) -> Int {
    return l + r
}

let clever = (1...10).reduce([], mapping(incr)(append))
                     .reduce(0, filtering(isEven)(add))
print(clever)

let oldWay = (1...10).map(incr).filter(isEven).reduce(0, add)

assert(mapping(incr)(append)([], 1) == [2])
assert(mapping(incr)(append)([0,0], 1) == [0,0,2])
assert(mapping(incr)(add)(0, 1) == 2)

assert(filtering(isEven)(append)([1,1], 2) == [1,1,2])
assert(filtering(isEven)(append)([1,1], 3) == [1,1])

print((1...100).reduce([], filtering(isEven)(append)))


let incrAndFilterEvens = mapping(incr)(filtering(isEven)(append))
let transducerRes = (1...20).reduce([], incrAndFilterEvens)

let oldRes = (1...20).map(incr).filter(isEven)

print(transducerRes)
print(oldRes)


print((1...30).reduce([], append >>= filtering(isPrime)  )) 
print((1...30).reduce([], append >>= mapping(incr) >>= filtering(isPrime)  )) 

print((1...30).reduce([], append >>= mapping(square) >>= mapping(incr) >>= filtering(isPrime)))

print((1...20).reduce(0, (+) >>= filtering(isPrime) >>= mapping(incr) >>= mapping(square)))



func ap<T>(to accum: [T], with input: T) -> [T] {
    print(accum)
    return accum + [input]
}


let ftw = ap >>= mapping(incr) >>= mapping(double) >>= filtering(isEven)
let res = (1...20).reduce([], ftw)

print(res)


