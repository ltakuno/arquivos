extension Array {
    func accumu<T>(_ initialValue: T, 
                   _ nextPartialValue: (T, Element) -> T) -> [T] {
        
        var running = initialValue
        return map { next in
            running = nextPartialValue(running, next)
            return running
        }
    }
}
print([1, 2, 3, 4].accumu(0, +)) // [1, 3, 6, 10]
