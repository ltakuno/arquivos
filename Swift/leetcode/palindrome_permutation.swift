import Foundation

func isPalindromePermutation(word: String) -> Bool { 
   var oddCharacters: Set<Character> = []

   for ch in word { 
      if oddCharacters.contains(ch){
         oddCharacters.remove(ch)
      } else {
         oddCharacters.insert(ch)
      }
   }
   return oddCharacters.count <= 1
}

isPalindromePermutation(word: "hannah")
