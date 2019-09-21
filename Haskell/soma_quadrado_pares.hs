soma_quadrado_pares :: [Int] -> Int
soma_quadrado_pares ns = sum [n^2 | n <- ns, even n]


soma_quadrado_pares1 :: [Int] -> Int
soma_quadrado_pares1 ns = sum (map (^2) (filter even ns))


