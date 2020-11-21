/*

  Faça uma função bissextos que retorne todos os anos 
  bissextos até 2016, começando pelo ano de 1584. 
  Os anos bissextos são aqueles não múltiplos de 100
  e múltiplos de 4, ou múltiplos de 400

*/

func bissextos() -> [Int] {
    let multiplo = {x, y in return x % y == 0} // closures
    return Array(1584...2016).filter{ (!multiplo($0,100)  && multiplo($0,4)) || multiplo($0, 400) } 
}

print(bissextos())



