-- currying states that these are the same
-- f :: a -> b -> c -> d
-- f :: a -> (b -> (c -> d))
-- example:

add :: Int -> Int -> Int
-- add x y = x + y
-- add x = (\y -> x + y)
add = (\x -> (\y -> x + y))

-- good example is a map function
doubleList = map (\x -> x*2)