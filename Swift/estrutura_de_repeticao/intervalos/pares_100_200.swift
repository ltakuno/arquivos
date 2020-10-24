/*
Escrever um programa que gera e escreve números ímpares entre 100 e 200 (inclusive) 
*/

// for n in 100...200{
//   if n % 2 == 0{
//      print(n) 
//   }
// }
  
// for n in stride(from:100, to:200, by:2){
//   if n % 2 == 0{
//      print(n) 
//   }
// }

// var n = 100
// while (n <= 200){
//   print(n)
//   n = n + 2
// }

let s = Array(100...200).filter{$0 % 2 == 0}
for n in s{
  print(n)
}
