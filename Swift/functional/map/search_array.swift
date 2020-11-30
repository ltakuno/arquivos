var names = ["Ford", "Arthur", "Trillian", "Zaphod", "Marvin", "Deep Thought", "Eddie", "Slartibartfast", "Humma Kuvula"]

if let index = names.firstIndex(of: "Marvin") {
    print(index) // Output: 4
}


if let index = names.firstIndex(of: "Zaphod") {
    names[index] = "Prostetnic Vogon Jeltz"
    print(names)
}


let grades = [8, 9, 10, 1, 2, 5, 3, 4, 8, 8]

if let index = grades.firstIndex(where: { $0 < 7 }) {
    print("The first index < 7 = \(index)")
}


if let name = names.first(where: { $0.count > 7 }) {
    print(name)  // Trillian
}


extension Array where Element: Equatable {
    func all(where predicate: (Element) -> Bool) -> [Element]  {
        return self.compactMap { predicate($0) ? $0 : nil }
    }
}

let grades1 = [8, 9, 10, 1, 2, 5, 3, 4, 8, 8]
let goodGrades = grades1.all(where: { $0 > 7 })
let goodGrades1 = grades1.compactMap{ $0 > 7 ? $0 : nil }
print(goodGrades) // Output: [8, 9, 10, 8, 8]
print(goodGrades1) // Output: [8, 9, 10, 8, 8]
