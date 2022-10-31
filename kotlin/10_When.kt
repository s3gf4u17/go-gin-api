fun main() {
    val time = -2
    val isSunday : Boolean = true

    // val greeting = when (time){
    //     in 0..5 -> "why so early"
    //     in 0..11 -> "good morning"
    //     12 -> "time for lunch"
    //     else -> null
    // }

    val greeting = when {
        isSunday -> "its sunday"
        time in 0..5 -> "why so early"
        time in 0..11 -> "good morning"
        time == 12 -> "time for lunch"
        else -> null
    }

    println(greeting)
}