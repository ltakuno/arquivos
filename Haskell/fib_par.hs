import Control.Parallel

fib :: Integer -> Integer
fib 0 = 0
fib 1 = 1
fib n  = n1 `par` (n1 + n2)
   where
      n1 = fib(n-1)
      n2 = fib(n-2)


main :: IO ()
main = do
   print(fib 36) 
