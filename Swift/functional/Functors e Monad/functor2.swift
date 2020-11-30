/*
Ana e Brian estão almoçando em um restaurante e eles 
concordaram em dividir a conta. Brian quer pedir algo
que Ana é alergica, e eles concordaram que Ana não pagará
aquele item. Brian pega a conta e calcula a parte da Ana.
Você deve verificar se esse calculo está correto.

Por exemplo, assuma os seguintes precos da conta:
conta: [2,4,6].
Ana não consome o item k = conta[2] que custa 6.
Se Brian calcular corretamente, Ana pagará (2+4/2) = 3.
Se ele incluir o custo[2] o calculo será (2+4+6)/2 = 6. 
No segundo caso, ele deveria devolver 3 para a Ana.
Entrada:
vetor conta[i], 0 <= i <= n
inteiro b, que é a quantidade de dinheiro que Brian cobrou
de Ana por ela compartilhar a conta.
*/
 
 
enum Maybe<T: Equatable> {
    case Just(T)
    case Nothing

    func fmap<U>(f: (T) -> U) -> Maybe<U> {
        switch self {
        case .Just(let x): return .Just(f(x))
        case .Nothing: return .Nothing
        }
    }
}

extension Maybe: CustomStringConvertible{
    var description: String {
        switch self {
        case .Just(let x):
            return "\(x)"
        case .Nothing:
            return ".Nothing"
        }
    }
}
extension Maybe: Equatable{
    static func ==(lhs: Maybe, rhs: Maybe) -> Bool {
    switch (lhs, rhs) {
        case (let .Just(v1), let .Just(v2)):
        return v1 == v2

    case (.Nothing, .Nothing):
        return true
    default:
        return false
    }
}
}

// print(Maybe.Just(3).fmap { i in i+2 })
// print(Maybe.Nothing.fmap { i in i+3 })
  
 

func splitAt (_ xs: [Int],_ n: Int)-> ([Int], [Int]) {
   return (Array(xs.dropLast(n)), Array(xs.dropFirst(n)))
}
func excludeNth(_ xs: [Int],_ n: Int) -> [Int]{
    let (esq, dir) = splitAt(xs, n)
    return esq + Array(dir.dropFirst()) 
}

func solve(_ k: Int, _ conta: [Int],_ b: Int) -> Maybe<Int>{
    let actualPrice = excludeNth(conta, k).reduce(0, +) / 2
    if b > actualPrice{
        return Maybe.Just(b - actualPrice)
    } else {
        return Maybe.Nothing
    }
}

func maybe(_ s: String,_ v: Maybe<Int>) -> String{
     if v == .Nothing{
         return s
     } else {
         return "\(v)"
     }
}

// let v = Array(1...10)

// let x = Maybe.Just(5)

// print( x == Maybe.Just(3))

// print(Maybe.Just(3).fmap { i in i+2 })

// print(maybe("Bon Apetit", Maybe.Just(5)))
// print(maybe("Bon Apetit", Maybe.Nothing))
let k = 1
let conta = [3, 10, 2, 9]
let b = 12
print(maybe("Bon Apetit", solve(k, conta, b)))
