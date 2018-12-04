soma = \x -> (\y -> x+y)
impares n = map f [1 .. n] where f x = 2 * x - 1
