let result = (1...)
    .lazy
    .map { $0 * $0 }
    .first(where: { $0 > 100})

   print(result! as Any)

let results = (1...)
    .lazy
    .map { $0 * $0 }
    .filter { $0 > 100 }
print(Array(results.prefix(10)))

let s = Array(sequence(first: 0, next: {$0 + 1} ).prefix(10))
print(s)


let fibonacci = sequence(state: (0, 1), next: { (state: inout (Int, Int)) -> Int? in
    let next = state.0 + state.1
    state = (state.1, next)
    return next
})
print(Array(fibonacci.prefix(20)))
