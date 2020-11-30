func abc() {
    defer { print("First defer...") }
    defer { print("Second defer...") }
    defer { print("Third defer...") }
    print("Doing some work...")
}

abc()

// Doing some work...
// Third defer...
// Second defer...
// First defer...



for i in 1...10 {
    print ("In \(i)")
    defer { print ("Deferred \(i)") }
    print ("Out \(i)")
}
