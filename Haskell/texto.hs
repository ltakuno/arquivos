import Data.Char

minusculas :: String -> Int
minusculas txt = length [c | c <- txt, isLower c]
