/*
  Faça uma função pp que receba n e devolva os n primeiros pares
  naturais. 
*/

func pp(_ n : Int) -> [Int] { 
   return Array(sequence(first: 0, next: {$0 + 2}).prefix(n))
}

func pp1(_ n : Int) -> [Int] { 
   return Array(stride(from:0, to: 2*n, by: 2))
}


print(pp(10))
print(pp1(10))
