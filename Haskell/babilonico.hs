babilon :: Double -> [Double]
babilon q = iterate f q where f x = 0.5 * (x + q/x)


absolute :: [Double] -> Double -> Double
absolute xs eps = head [x | (x,x') <- zip xs (tail xs), abs(x-x')<eps]

relative :: [Double] -> Double -> Double
relative xs eps = head [x | (x,x') <- zip xs (tail xs), abs((x-x')/x')<eps]


