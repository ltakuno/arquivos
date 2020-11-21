/*
  Faça uma função isEven que verifica se o número é par,
  da mesma forma faça uma função que verifica se o número é impar.

*/


func isEven(_ n : Int) -> Bool{
    if n == 0 {
        return true
    }
    return isOdd(n-1)
}

func isOdd(_ n : Int) -> Bool{
    if n == 0 {
        return false
    }
    return isEven(n-1)
}


print(isEven(14))
