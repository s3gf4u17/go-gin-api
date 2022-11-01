// NUMBERS
fun main() {
    val myByte : Byte = 8
    val myShort : Short = 16
    val myInt : Int = 32
    val myLong : Long = 64

    val myFloat : Float = 32.00F
    val myDouble : Double = 64.00

    println(myByte.toLong()::class)

    val bigLong : Long = 1_000_000
    println(bigLong)

    var newInt = myInt.and(32).plus(2).minus(1).times(12)
    println(newInt)
}