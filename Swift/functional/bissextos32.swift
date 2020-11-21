/*
  Faça uma função bissexto32 que devolve uma lista com os anos bissextos entre 1584 e 2016 e que são multiplos de 32.
  Cada elemento dessa nova lista deve ser uma string
  e estar em ordem decrescente.
*/
import Foundation

func bissextos32() -> [String] {
    let multiplo = {x, y in return x % y == 0} // closures
    return Array(1584...2016)
        .filter{ multiplo($0,32) && 
                (!multiplo($0,100)  && multiplo($0,4)) || 
                multiplo($0, 400) } 
        .map{ String($0) }
        .reversed()
}

print(bissextos32())
 


