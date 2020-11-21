/*
  Faça uma função range que recebe uma lista e dois inteiros i, j e devolve uma sub-lista com os elementos do índice i ao índice j exclusivo.
*/

func range(_ lista: Array<Int>, _ i: Int, _ j: Int) -> Array<Int> {
   return Array(lista[i..<j])
}

print(range([0,1,2,3,4,5,6,7,8,10,11], 3, 6))





// func range(_ lista: [Int], _ i: Int, _ j: Int) -> ArraySlice<Int> {
//    let sub_lista = lista[i..<j] 
//    return sub_lista
// }

// print(range([0,1,2,3,4,5,6,7,8,10,11], 3, 6))

// let array = [1, 2, 3, 4, 5, 6]
// let subarray = array[0...2] // Yields [1, 2, 3]
// print(subarray)
// print(type(of: subarray))
