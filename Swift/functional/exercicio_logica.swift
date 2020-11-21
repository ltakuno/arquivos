/*
  Faça uma função que receba um número n que devolva true caso a entrada seja
  maior que -1 e menor que 300 ou multiplo de 6, e 
  false caso contrário
*/

func multiplo(_ x: Int,_ y: Int) -> Bool { 
    return x % y == 0
}
func f(_ n: Int) -> Bool {
    
    guard n > -1 && n < 300, 
          multiplo(n, 6)
    else{ return false }
    return true      
}

func f1(_ n: Int) -> Bool {
    return (n > -1 && n < 300) || multiplo(n, 6)     
}

print(f(6))
print(f1(6))
print(f1(60))
