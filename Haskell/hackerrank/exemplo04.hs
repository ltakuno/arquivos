{-# LANGUAGE FlexibleInstances, UndecidableInstances, DuplicateRecordFields #-}

module Main where

import Control.Monad
import Data.Array
import Data.Bits
import Data.List
import Data.List.Split
import Data.Set
import Debug.Trace
import System.Environment
import System.IO
import System.IO.Unsafe

-- Complete the countApplesAndOranges function below.
countApplesAndOranges s t a b apples oranges = do

readMultipleLinesAsStringArray :: Int -> IO [String]
readMultipleLinesAsStringArray 0 = return []
readMultipleLinesAsStringArray n = do
    line <- getLine
    rest <- readMultipleLinesAsStringArray(n - 1)
    return (line : rest)

main :: IO()
main = do
    stTemp <- getLine
    let st = words stTemp

    let s = read (st !! 0) :: Int

    let t = read (st !! 1) :: Int

    abTemp <- getLine
    let ab = words abTemp

    let a = read (ab !! 0) :: Int

    let b = read (ab !! 1) :: Int

    mnTemp <- getLine
    let mn = words mnTemp

    let m = read (mn !! 0) :: Int

    let n = read (mn !! 1) :: Int

    applesTemp <- getLine

    let apples = Data.List.map (read :: String -> Int) . words $ applesTemp

    orangesTemp <- getLine

    let oranges = Data.List.map (read :: String -> Int) . words $ orangesTemp

    countApplesAndOranges s t a b apples oranges

