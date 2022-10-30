-- hw is an io action, not a variable or function
hw = putStrLn "Hello world"

greet :: IO ()
greet = do
    putStrLn "What is your name?"
    name <- getLine
    putStrLn ("Hello "++name++".")

main :: IO ()
main = do
    i <- getLine
    if i /= "quit" then do
        putStrLn("Input: "++i)
        main
    else
        return ()