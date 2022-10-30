in_range :: Integer -> Integer -> Integer -> Bool

-- in_range min max x = x >= min && x <= max

-- in_range min max x =
--     let in_lower_bound = min <= x
--         in_upper_bound = max >= x
--     in 
--         in_lower_bound && in_upper_bound

-- in_range min max x = ilb && iub where
--     ilb = min <= x
--     iub = max >= x

in_range min max x = if ilb then iub else False where
    ilb = min <= x
    iub = max >= x