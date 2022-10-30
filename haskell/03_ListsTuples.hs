import Data.List
-- head :: [a] -> first of a
-- tail :: [a] -> last of a
-- length :: [a] -> Int
-- init :: [a] -> a without last element
-- null :: [a] -> Bool (wheter list empty or not)
-- functions on lists of booleans
-- and :: [Bool] -> Bool
-- or :: [Bool] -> Bool

asc :: Int -> Int -> [Int]

asc n m
    | m < n = []
    | m == n = [m]
    | m > n = n : asc (n+1) m

-- list comprehension
-- [2*x | x <- [1,2,3]] -> [2,4,6]
-- [2*x | x <- [1,2,3], x > 1] -> [4,6]
-- [(x,y) | x <- [1,2,3], y <- ['a','b']] -> [(1,'a'),(1,'b'),(2,'a'),(2,'b'),(3,'a'),(3,'b')]

-- list patterns
mysum :: [Int] -> Int
mysum [] = 0
mysum (x:xs) = x + mysum xs

evens :: [Int] -> [Int]
evens [] = []
evens (x:xs)
    | mod x 2 == 0 = x : evens xs
    | otherwise = evens xs

-- tuples = having multiple elements in a pair
-- let (x,y) = (1,2) in x -> 1
addTuples :: [(Int, Int)] -> [Int]
addTuples xs = [x+y | (x,y) <- xs]