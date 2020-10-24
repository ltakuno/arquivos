import Foundation

/*
Guided activity

Book: Learning Swift Programming by Examples
Author: Zhimin Zhan

Printing Shapes

Write a program that prints out half of the diamond shape using asterisks.

Purpose:
- Decrement count in loops

Analyse:

The key to this problem is to determine the number of stars for the corresponding rows.
 row 1 to 8: the same as row number
 row 9 to 16: 16 - row

Hints:

Control flows using if ... else

*/

var score = 75
if score < 60 {
   print("Failed!")
} else {
   print("Pass!")
}

// 1. Check output:
// Pass!

// 2. If you change the var score = 59 and run again, you will get Failed! .
// Check output

/* 
Boolean condition
Common comparison operators in Swift
==            equal to
!=            not equal to
<             less than
<=            less than or equal to
>             greater than
>=            greater than or equal to

Examples:
2 > 1           // => true
2 == 1          // => false (equal to)
2 != 1          // => true  (not equal to)
2 <= 2          // => true
*/

// 3. Check Boolean values
let x = (2 > 1)
print(x)

//  check output

// 4. Check expression: 2 == 1
// write your code here

// 5. Check expression: 2 != 1
// write your code here

// 6. Check expression: 2 <= 2
// write your code here

//
// go deeper: https://docs.swift.org/swift-book/LanguageGuide/ControlFlow.html
//

// Working out the solution on your computer
// - Make sure you understand the Analyse and Hints parts before you start.

// 6. Print out asterisks like triangle shape below:

//    *
//    **
//    ***
//    ****
//    *****
//    ******
//    *******
//    ********
//    *******
//    ******
//    *****
//    ****
//    ***
//    **
//    *

//  Write your code here.

















