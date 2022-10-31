fun main () {
    sayHelloKotlin()

    // val - locked value, cannot be reassigned
    val username : String = "Miguel"
    //username = "Mikhail"
    val age : Int = 23
    println("Current active user: $username, age: $age. In 2 years he will be ${age+2}.")
}

fun sayHelloKotlin () {
    println("Hello Kotlin!")
}