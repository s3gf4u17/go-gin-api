data Color =
    Red | Orange | Yellow | Green | Blue | Magenta

data PeaNum =
    Succ PeaNum | Zero

data Calculation =
    Add Int Int | Sub Int Int | Mul Int Int | Div Int Int

calc :: Calculation -> Int
calc (Add x y) = x + y
calc (Sub x y) = x - y
calc (Mul x y) = x * y
calc (Div x y) = div x y

-- calc (Div 2 1) -> 2

data Tree a = Leaf | Node (Tree a) a (Tree a)
four :: PeaNum
four = Succ $ Succ $ Succ $ Zero

tree :: Tree Int
tree = Node (Node Leaf 1 Leaf) 2 (Node (Node Leaf 3 Leaf) 4 Leaf)

incr :: PeaNum -> PeaNum
incr = Succ

decr :: PeaNum -> PeaNum
decr Succ(n) = n