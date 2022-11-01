// return a value from a function
fun main(){
    getName() // nothing happens
    val name : String = getName()
    sayHi(name)
}

fun getName() : String {
    return "Bob"
}

fun sayHi(name:String) : Unit {
    println("Hi $name")
    return Unit
}
// Unit type works like void