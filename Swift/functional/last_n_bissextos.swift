/*
  Faça uma função last_n_bissextos que encontre os n
  últimos anos bissextos
*/

func bissextos() -> [Int]{
        let multiplo = {x, y in return x % y == 0}
    return Array(1584...2016).filter{ (!multiplo($0,100)  && multiplo($0,4)) || multiplo($0, 400) } 
}

func last_n_bissextos(_ n: Int) -> [Int] {
    return bissextos()
            .reversed()
            .prefix(n)
            .reversed()     
}

print(last_n_bissextos(10) == [1980,1984,1988,1992,1996,2000,2004,2008,2012,2016])
print(last_n_bissextos(1) == [2016])   
print(last_n_bissextos(2) == [2012,2016])   
print(last_n_bissextos(0) == [])
