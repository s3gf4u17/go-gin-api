-- data Maybe a = Nothing | Just a
-- if there is some error or exception what should it return?
-- ex what is the head of an empty list
-- if we dont want to make exceptions we can just return Just result or Nothing

safedivide :: Integral a => a -> a -> Maybe a
safedivide a b = if b == 0 then Nothing else Just $ div a b