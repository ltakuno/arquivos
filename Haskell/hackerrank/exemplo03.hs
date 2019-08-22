{-# LANGUAGE DuplicateRecordFields, FlexibleInstances, UndecidableInstances #-}

module Main where

import Control.Monad
import Data.Array
import Data.Bits
import Data.List
import Data.List.Split
import Data.Set
import Data.Text
import Debug.Trace
import System.Environment
import System.IO
import System.IO.Unsafe

--
-- Complete the 'gradingStudents' function below.
--
-- The function is expected to return an INTEGER_ARRAY.
-- The function accepts INTEGER_ARRAY grades as parameter.
--

gradingStudents grades = do
    -- Write your code here

lstrip = Data.Text.unpack . Data.Text.stripStart . Data.Text.pack
rstrip = Data.Text.unpack . Data.Text.stripEnd . Data.Text.pack

readMultipleLinesAsStringArray :: Int -> IO [String]
readMultipleLinesAsStringArray 0 = return []
readMultipleLinesAsStringArray n = do
    line <- getLine
    rest <- readMultipleLinesAsStringArray(n - 1)
    return (line : rest)

main :: IO()
main = do
    stdout <- getEnv "OUTPUT_PATH"
    fptr <- openFile stdout WriteMode

    gradesCountTemp <- getLine
    let gradesCount = read $ lstrip $ rstrip gradesCountTemp :: Int

    gradesTemp <- readMultipleLinesAsStringArray gradesCount
    let grades = Data.List.map (read :: String -> Int) gradesTemp

    let result = gradingStudents grades

    hPutStrLn fptr $ Data.List.intercalate "\n" $ Data.List.map (\x -> show x) $ result

    hFlush fptr
    hClose fptr

