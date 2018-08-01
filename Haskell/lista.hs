size_list [] = 0
size_list (x:xs) = 1 + size_list xs


{-
   Funcao que verifica se duas listas são iguais
   O que é serem iguais?

  - Mesmo número de elementos
  - Possuírem os mesmos elementos
  - Os elementos estarem na mesma posição

   [1,2,3] e [3,2,1] = True
   [3,2,1] e [1,2,3] = False
   [] e [1,2,3] = False
   [1,2,3] e [] = False

-}
iguais :: [Int] -> [Int] -> Bool
iguais [] [] = True
iguais [] _ = False
iguais _ [] = False
iguais (x:xs) (y:ys) | (x == y) = iguais xs ys
                     | otherwise = False

{- 
   Funcao que recebe uma lista e retorna o inverso dessa lista

   Exemplo de entrada: [1,2,3]
   Exemplo de saida: [3,2,1]

-}

inverter_lista :: [t] -> [t] -> [t]
inverter_lista [] lista_invertida = lista_invertida
inverter_lista (x:xs) lista_invertida = inverter_lista xs lista_invertida ++ [x] 

inverter :: [t] -> [t]
inverter [] = []
inverter l = inverter_lista l []

reverter [] = []
reverter (x:xs) = reverter xs ++ [x]

pertence :: [Int] -> Int -> Bool
pertence [] _ = False
pertence (x:xs) n | (x == n) = True
                  | otherwise = pertence xs n 

maior :: [Int] -> Int
maior [x] = x
maior (x:xs) | (x > maior xs) = x
             | otherwise = maior xs

todos_pares :: [Int] -> Bool
todos_pares [] = True 
todos_pares (x:xs) | (mod x 2 /= 0) = False
                   | otherwise = todos_pares xs
