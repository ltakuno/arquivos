import Foundation

/*
Guided activity

Book: Learning Swift Programming by Examples
Author: Zhimin Zhan

Printing Shapes

Print out asterisks like triangle shape below:

*
**
***
**** 
*****
******
*******
******** 
*********

Purpose:
- Develop ability to analyse patterns
- Variables
- Use of looping

Analyse:

row               The number of stars
1                 1  
2                 2
3                 3
...               ...
n                 n  


Hints:

Print out text:
print("*")
print("**")  // will be in a separate line

Generate multiple occurrences of the same character
String(repeating: "$", count: 3)   // => $$$

*/


// 1. Declare a variable starCount to store a number of stars to print
// 2. Print out starCount occurrences of "*"

var starCount = 2
// Write your code here.
// Expected output: '**'

// 3. Increase the value of starCount by 1
// 4. Print out starCount occurrences of "*"

// Write your code here.
// Expected output: '***'


// 5. Print out text multiple times in a loop (fixed number of times)

for index in 1...3 {
   print(index)
}

// check output:
// 1 
// 2
// 3

//
// go deeper: https://docs.swift.org/swift-book/LanguageGuide/ControlFlow.html
//

// Working out the solution on your computer
// - Make sure you understand the Analyse and Hints parts before you start.


// 6. Print out asterisks like triangle shape below:

//  *
//  **
//  ***
//  **** 
//  *****
//  ******
//  *******
//  ******** 
//  *********

//  Write your code here.

















