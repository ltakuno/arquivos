func dotProduct(a: [Int], b: [Int]) -> Int {
    return zip(a, b).reduce(0) { (result, pair) in
        return result + pair.0 * pair.1
    }
}

print(dotProduct(a: [1,2,3], b: [2,2,2]))

