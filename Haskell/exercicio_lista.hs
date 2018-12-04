primeiros :: [a] -> [a]
primeiros lista = reverse (tail (reverse lista))

metade :: [a] -> ([a], [a])
metade lista = ( take k lista, drop k lista)
         where k = div (length lista) 2
