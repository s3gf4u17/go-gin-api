data Person = Person {name::String, age::Int}
greet :: Person -> [Char]
-- greet person = "hi " ++ name person
greet (Person name _) = "hi " ++ name
-- greet Person{name = "amy", age = 12}
-- greet (Person "amy" 12)

data Point =
    D2 {x::Int,y::Int}
    | D3 {x::Int,y::Int,z::Int}
-- x (D2 1 2) -> 1
-- z (D3 1 2 3) -> 3