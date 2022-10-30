-- x::a
-- y::b
-- z::c
-- (+) :: (Num d) => d -> d -> d
-- (:) :: e -> [e] -> [e]
-- from x + y
-- a = d and b = d
-- from (x + y) : z
-- d = e and [e] = c

-- so we can also describe these types as
-- x :: d
-- y :: d
-- z :: [e]
-- z :: [d]
-- as a result:
add :: (Num d) => d -> d -> [d] -> [d]

add x y z = ( x + y ) : z

-- example of a type error
-- f x = x : x
-- thats because x wants to be a and [a] at the same time