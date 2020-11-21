/*
Faça uma função que receba uma String e devolva o caracter do meio da String.
Se o tamanho da String é ímpar, devolva o caracter do meio.
Se o tamanho da String é par, devolva os dois caracteres do meio. 
*/


func getMiddle(_ s:String) -> String{
    let n = s.count
    let m = n/2
    let a = Array(s)
    if (n % 2 == 1) {return String(a[m])}
    else {return String(a[m-1])+String(a[m])}
}

print(getMiddle("hello"))
print(getMiddle("hell"))



