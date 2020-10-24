/*
Jewels and stones

You're given string j representing the types of stones that are
jewels, and s representing the stones you have. Each character in
s is a type of stone you have.  You want to know how many of stones
you have are also jewels.

The letters in j are guaranteed distinct, and all characters in j and s are
letters. Letter are case sensitive, so "a" is considered a different type of stone
from "A"

Example1
Input: j = "aA", s = "aAAbbbb"
Output: 3


Example2
Input: j = "z", s = "ZZ"
Output: 0

Note 
- s and j will consist of letters and have length at most 50.
- The charcters in j are distinct.

*/



import Foundation

class Solution {
    func numJewelsInStones(_ J: String, _ S: String) -> Int {
        var jSet: Set<Character> = []
        var res: Int = 0
        for ch in J {
            jSet.insert(ch)
        }
        for ch in S {
            if jSet.contains(ch) { 
                res += 1
            }
        }
        return res
    }
}
