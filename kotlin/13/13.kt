// REFERENTIAL EQUALITY
fun main(){
    val a = 12
    val b = 12

    val c = Person("Bob")
    val d = Person("Bob")

    println(a==b)
    println(a===b)
    println(c==d)
    println(c===d)
}

class Person(var name: String)