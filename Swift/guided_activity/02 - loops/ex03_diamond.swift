import Foundation

/*
Guided activity

Book: Learning Swift Programming by Examples
Author: Zhimin Zhan

Printing Shapes

Write a program that prints out a diamond shape using asterisks.

Print 7 rows of ‘ * ’ in a diamond shape as below:
   *
  ***
 *****
*******
 *****
  ***
   *

Purpose:
 - Analyse more complex patterns
 - Math operators

Analyse:

Below are formulas to calculate the number of star; where
number and totalRows represents the total number of rows,
rowNumber represents the row

  1. The number of stars for the rows before the middle one is 
     (rowNumber - 1) * 2 + 1 .
  2. the number of stars for the rows after the middle one is 
     (totalRows - rowNumber) * 2 + 1

Think about the spaces in front of each row, except for the 4th row (the longest middle one).

Hints:

Write down the number of spaces and stars for each row.

row 1: print 3 spaces + 1 star
row 2: print 2 spaces + 3 star
row 3: print 1 spaces + 5 star
row 4: print 0 spaces + 7 star
row 5: print 1 spaces + 5 star
row 6: print 2 spaces + 3 star
row 7: print 3 spaces + 1 star

Math operators: multiply and divide
The Math multiply and divide operator are * and / respectively.

8 / 2 // => 4
9 / 2 // => 4, ignore the remainder
(1 + 2) * 3 + 3 / 2 // => 10


 1. Print 9 rows of ‘ * ’ in a diamond shape as below:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

//  Write your code here.

















