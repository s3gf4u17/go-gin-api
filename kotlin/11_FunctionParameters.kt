fun main() {
    saySomething("test",7)
}

fun saySomething(something : String, reps : Int){
    for (i : Int in 1..reps) println("index: $i text: $something")
}