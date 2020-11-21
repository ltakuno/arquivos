func foldl<A,B>(_ acc: A, _ list: Array<B>,_ f:(A, B) -> A) -> A {
    if list.isEmpty { return acc }
    return foldl(f(acc, list.first!), Array(list.dropFirst()), f)
}

func sum(list: Array<Int>) -> Int {
    return foldl(0, list, (+))
}


extension Array {
    func push(_ elem: Element) -> Array<Element> {
        var tmpArray = Array(self)
        tmpArray.insert(elem, at: 0)
        
        return Array(tmpArray)
    }
}
func reverse<T>(list: Array<T>) -> Array<T> {
   return foldl(Array<T>(), list, { return $0.push($1) })
}

func maximum(list: Array<Int>) -> Int {
    return foldl(0, list, max)
}


func fac(n: Int) -> Int {
    return foldl(1, Array(1...n), (*))
}


print(maximum(list: [1,2,3]))
print(fac(n: 5))

extension Array {
    func _append(_ elem: Element) -> Array<Element> {
        var arr = Array(self)
        arr.append(elem)
        
        return Array(arr)
    }
}

func _filter<T>(list: Array<T>, pred: ((T) -> Bool)) -> Array<T> {
    return foldl(Array<T>(), list, { pred($1) ? $0._append($1) : $0 })
}

func _map<A,B>(list: Array<A>, mf: ((A) -> B)) -> Array<B> {
    return foldl(Array<B>(), list, { $0._append(mf($1)) })
}


print(_filter(list:[1,2,3,4,5,6]){$0.isMultiple(of: 2)})
