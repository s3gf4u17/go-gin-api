-- (.) is a composition operator
-- (.) -> (b -> c) -> (a -> b) -> a -> c
-- (f . g) is equivalent to (\x -> f (g x))

map2d :: (a -> b) -> [[a]] -> [[b]]
map2d = map . map

-- dollar sign operator
-- ($) :: (a -> b) -> a -> b
-- f xs = map (\x -> x+1) (filter(\x -> x>1) xs)
-- is the same function as
-- f xs = map (\x -> x+1) $ filter(\x -> x>1) xs