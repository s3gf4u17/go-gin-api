// PROVIDE TYPE ON VARIABLES
fun main() {
    val fullName = "Donn Felker"
    println(fullName::class)

    val myString : String = ""
    println(myString::class)
    val myInt : Int = 0
    println(myInt::class)
    val myDouble : Double = 0.0
    println(myDouble::class)
    val myBoolean : Boolean = true
    println(myBoolean::class)
}