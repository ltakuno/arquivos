/*
Problem: Given a string, find the length of the longest substring without repeating characters.

Examples:

Given: "abcabcbb", the answer is "abc", which the length is 3
Given: "bbbb", the answer is "b", with the length of 1
Given: "pwwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

func findLongestSubstring(_ word: String) -> Int {
   if word.count == 0 {
      return 0
   }

   var charTable = [Character: Int]()

   var maxLength: Int = 0
   var lastDuplicateIndex: Int = -1 

   let charArray = Array(word)

   for i in 0..<charArray.count{
       let currentChar = charArray[i]
       if let charIndex = charTable[currentChar], lastDuplicateIndex < charIndex {
          lastDuplicateIndex = charIndex
       }
       let currentLength = i-lastDuplicateIndex
       maxLength = max(maxLength, currentLength)  
       charTable[currentChar] = i
   }
   return maxLength
}

print("Result: ", findLongestSubstring("abcabcbb"))
print("Result: ", findLongestSubstring("bbbb"))
print("Result: ", findLongestSubstring("pwedk"))

/* >>>>>> TRACKING <<<<<<
Example: "abcabcbb"

---------------------------------
NOTE!!!: currentLength is always compare to previous maxLength
current char       :  a ->  b ->  c -> a -> b -> c -> b -> b
current index      :  0 ->  1 ->  2 -> 3 -> 4 -> 5 -> 6 -> 7 
lastDuplicateIndex : -1 -> -1 -> -1 -> 0 -> 1 -> 2 -> 4 -> 6
currentLength      :  1 ->  2 ->  3 -> 3 -> 3 -> 3 -> 2 -> 1
maxLenght          :  0 ->  1 ->  2 -> 3 -> 3 -> 3 -> 3 -> 3  
---------------------------------
charTable:
[a:0] ->
[a:0, b:1] ->
[a:0, b:1, c:2] ->
[a:3, b:1, c:2] ->
[a:3, b:4, c:2] ->
[a:3, b:4, c:5] ->
[a:3, b:6, c:5] ->
[a:3, b:7, c:5] ->







*/
