in_range :: Integer -> Integer -> Integer -> Bool

-- in_range min max x = x >= min && x <= max

-- in_range min max x =
--     let in_lower_bound = min <= x
--         in_upper_bound = x <= max
--     in 
--         in_lower_bound && in_upper_bound

in_range min max x = ilb && iub where
    ilb = min <= x
    iub = max >= x