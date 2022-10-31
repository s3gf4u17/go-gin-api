fun main() {
    for (i : Int in 0..10){
        //if (i%3==0) println("Fizz")
        //if (i%5==0) println("Buzz")
        // if (i !in 4..7) print("<") else print(">")
        val prefix : String = if (i==1) "*" else if (i !in 4..7) "<" else ">"
        println("$prefix $i")
    }
}