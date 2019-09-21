myLength :: [a] -> Int
myLength xs = sum [ 1 | x <- xs ] 

myLength' = sum . map (\_->1)
