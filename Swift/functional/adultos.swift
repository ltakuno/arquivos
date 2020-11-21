/*
   Você recebeu duas listas: uma lista  pessoas, que contém nomes de pessoas, e outra lista nascimento, que contém a data de nascimento (yyyy-mm-dd) da i-ésima pessoa. Ambas as listas são do tipo [String]. Você deve criar
   uma função maiores que retorna uma lista com os nomes maiores de idade. Considere maiores de idade aquelas pessoas nascidas antes de 2002-09-21. 
*/

func maiores(_ nomes:[String], _ nascs:[String]) -> [String]{
    let nomesnascs = zip(nomes, nascs)
    let adultos = nomesnascs.filter{ (_,ns) in ns < "2002-09-21" }
    return adultos.map{ $0.0 }
}


print(maiores(["Joao", "Maria", "Pedro", "Andre"], ["2007-05-05", "2010-10-10", "1980-02-02", "1975-12-01"]))
