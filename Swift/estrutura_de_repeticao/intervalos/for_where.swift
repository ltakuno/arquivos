var evens = [Int]()
for x in 1..<100 where x % 3 == 0 || x % 5 == 0 {
    evens.append(x)
}
print(evens)
