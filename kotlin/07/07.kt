// STRING INTERPOLATION AND TRIPLE QUOTES
fun main() {
    var message1 : String = "Hello\nMy name is Donn Felker\nHow are you? :)"
    var message2 : String = """
        >>>Hello
        >>>My name is Donn Felker
        >>>How are you? :)
    """.trimMargin(">>>").replaceIndent("x-")//.trimIndent()
    println("message1:\n$message1\nmessage2:\n$message2")
}