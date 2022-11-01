// STRING AND CHAR
fun main() {
    val fullName : String = "John Felker"
    println(fullName.length)
    println(fullName.decapitalize())
    println(fullName.toLowerCase())
    println(fullName.toUpperCase())

    val ascii : Char = 'x' // 16 bit unicode character
    val tab : Char = '\t'
    // val emoji : Char = '\u122'
    println("$ascii $tab")
}