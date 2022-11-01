// CREATE VARIABLES
fun main() {
    var fullName = "john"
    println(fullName)
    
    fullName = "bob felker"
    println(fullName)

    fullName = ""
    println(fullName.isEmpty())

    var age = 32
    // var age = 28 - redefinition not allowed
    println(age)
}