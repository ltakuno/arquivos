myButLast xs = head $ tail $ reverse xs

myButLast' :: [a] -> a
myButLast' = last . init
