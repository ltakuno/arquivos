/*
Escreva um programa que imprima os números de 1 a 100. 
Mas para múltiplo de três imprima "Fizz" ao invés do 
número e para múltiplos de cinco imprima "Buzz".
Para números que são múltplos de ambos três e cinco
imprima "FizzBuzz".
*/



let fizzbuzz:(Int) -> String = { i in
    switch (i % 3 == 0, i % 5 == 0)
    {
    case (true, false):
        return "Fizz"
    case (false, true):
        return "Buzz"
    case (true, true):
        return "FizzBuzz"
    default:
        return "\(i)"
    }
}

