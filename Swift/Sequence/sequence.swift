for i in sequence(first: 1, next: { $0 + 1 })
    .prefix(while: { return $0 <= 10 }) {
    print(i)
}
