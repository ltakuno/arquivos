import Data.Char

main::IO()
main = do
    v1 <- readLn 
    v2 <- readLn
    let soma = v1 + v2
    putStrLn $ "X = " ++ (show soma) ++ "\n" 
