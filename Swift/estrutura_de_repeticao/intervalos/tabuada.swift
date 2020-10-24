/*
Escrever um programa que leia um valor para a variável N e calcule a tabuada de N. 
Na forma: 
0 x N = 0
1 x N = N  
2 x N = 2N  
...
10 x N = 10N
*/

// let N = Int(readLine()!)!

// for n in 0...10 {
//   print("\(n) x \(N) = \(n * N)")
// }

let N = Int(readLine()!)!
var n: Int = 0
while n <= 10 { 
  print("\(n) x \(N) = \(n * N)")
  n += 1
}

