fun main () {
    var a = 5.0
    val b = 7.0
    println("a = $a b = $b")

    println("a + b = ${a+b}")
    println("a - b = ${a-b}")
    println("a * b = ${a*b}")
    println("a / b = ${a/b}")
    println("a % b = ${a%b}")

    println("2 + 2 * 3 = ${2+2*3}")

    a+=2
    println("a = " + a)
    println("a++ = ${a++}")
    a--
    println("++a = ${++a}")
}