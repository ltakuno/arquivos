/*
  Faça uma função so_os_primos que recebe uma lista
  de inteiros e devolve uma lista de inteiros com 
  os números primos contidos na lista original
*/



func eh_primo(_ n: Int) -> Bool{
    return Array(1...n).filter{ n % $0 == 0 } == [1,n]
}

func so_os_primos(_ lista: [Int]) -> [Int] {
   return lista.filter{ eh_primo($0) }
}

print(so_os_primos(Array(1...100)))
