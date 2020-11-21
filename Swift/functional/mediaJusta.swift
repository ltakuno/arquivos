/*
  Faça uma função mediaJusta que recebe uma lista ordenada de Float,
  descarta todos os elementos que sejam iguais ao maior valor da lista, e também, descarta todos os elementos que sejam iguais ao 
  menor valor da lista.
*/
import Foundation
func mediaList (_ xs:[Float]) -> Float {
    return xs.reduce(0.0,+)/Float(xs.count)
}

func mediaJusta(_ xs: [Float]) -> Float {
    let maior = xs.max()
    let menor = xs.min()
    return mediaList(xs.filter{$0 != maior}.filter{$0 != menor})
}


print(mediaJusta([1,1,1,1,1,1,2,2,4,4,4,4,4,4,6,6,6,6,6,6]))


/*
 Defina também uma função médiaJustaGlobal que faça o mesmo que o 
 mediaGlobal, mas utilizando a mediaJusta
*/

func mediaJustaGlobal(_ xss: [[Float]]) -> Float {
    return mediaList(xss.map{mediaJusta($0)})
}

print(mediaJustaGlobal([[2,3,4],[6,7,8],[2,3,4],[6,7,8]]))
assert(mediaJustaGlobal([[2,3,4],[6,7,8],[2,3,4],[6,7,8]]) == 5.0)
