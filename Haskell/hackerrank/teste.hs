readIntList :: IO [Int]
readIntList = do 
              line <- getLine
              return $ map read $ words line

