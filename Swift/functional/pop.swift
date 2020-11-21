/*
  Faça uma função pop que recebe uma lista e um inteiro n e ela retorna uma lista sem o elemento de índice n.
*/

func pop(_ xs: ArraySlice<Int>,_ n: Int) -> ArraySlice<Int>{
    if xs == [] {
        return []
    }

    if n == 0 {
        return xs.dropFirst()
    } else {
        return [xs.first!] + pop(xs.dropFirst(), n-1)
    }
}


 
print(pop(ArraySlice([1,2,3,4,5]), 2))

