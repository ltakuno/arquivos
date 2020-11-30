struct DoubleGenerator: Sequence, IteratorProtocol {
    var current = 1

    mutating func next() -> Int? {
        defer {
            current *= 2
        }

        return current
    }
}

var i = 0

let numbers = DoubleGenerator()
for number in numbers {
    i += 1
    if i == 10 { break }

    print(number)
}
