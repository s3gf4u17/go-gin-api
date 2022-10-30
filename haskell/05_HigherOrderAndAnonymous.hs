app :: (a -> b) -> a -> b
app f x = f x

add1 :: Int -> Int
-- add1 x = x + 1
-- app add1 17

-- anonymous functions (\<args> -> <expression>)
-- app (\x -> x+1) 2
add1 = (\x -> x+1)

-- examples of higher functions
-- map :: (a -> b) -> [a] -> [b]
-- maps list of type a to list of type b
-- map (\x -> x+1) [1,2,3,4] -> [2,3,4,5]
-- map (\(x,y) -> x+y) [(1,2),(3,4),(5,6)] -> [3,7,11]

-- filter :: (a -> Bool) -> [a] -> [a]
-- filter (\x -> x mod 2 == 0) [1,2,3,4] -> [2,4]