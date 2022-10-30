-- silnia (ang. faculty)
-- fac n =
--     if n <= 1 then 1
--     else n * fac (n-1)

-- guards
-- fac n
--     | n <= 1 = 1
--     | otherwise = n * fac(n-1)

-- pattern matching
is_zero 0 = True
is_zero _ = False

-- accumulators
fac n = aux n 1 where
    aux n acc
        | n <= 1 = acc
        | otherwise = aux (n-1) (n*acc)