import Foundation

let input = "Swift is like Object-C without the C"
print(input.contains("Swift"))

let languages = ["Python", "Ruby", "Swift"]
print(languages.contains("Swift"))

extension String{
  func containsAny(of array: [String]) -> Bool{
    for item in array{
      if self.contains(item){
        return true
      }
    }
    return false
  }
}

print(input.containsAny(of: languages))
print(languages.contains(where: input.contains))
