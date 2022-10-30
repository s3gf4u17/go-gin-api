-- exe1 : check if element appears in list
exe1 :: (Eq a) => a -> [a] -> Bool

exe1 _ [] = False
exe1 e (x:xs)
    | e == x = True
    | otherwise = exe1 e xs

-- exe2 : remove all duplicates from a list
exe2 :: (Eq a) => [a] -> [a]

exe2 [] = []
exe2 (x:xs)
    | exe1 x xs = exe2 xs
    | otherwise = x : exe2 xs

-- exe3 : returns true if list in ascending order
exe3 :: [Int] -> Bool

exe3 [] = True
exe3 [_] = True

-- exe3 (x:xs)
--     | x <= let (a:b) = xs in a = exe3 xs
--     | otherwise = False

exe3 (x:y:xs)
    | x <= y = exe3 (y:xs)
    | otherwise = False

-- exe4 : create a function hasPath that determines if a path from one node to another exists within a directed graph
hasPath :: [(Int,Int)] -> Int -> Int -> Bool

hasPath [] x y = x == y

hasPath xs x y
    | x == y = True
    | otherwise =
        let xs' = [(n,m) | (n,m) <- xs, n/=x] in
        or [hasPath xs' m y | (n,m) <- xs, n==x]