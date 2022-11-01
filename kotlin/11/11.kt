// TRUTH TABLES
fun main() {
    val myAge = 32
    val yourAge = 23

    val myName = "John"
    val yourName = "Johnny"

    if (myAge!=yourAge && myName!=yourName) println("Both data sets are different")
    if (myAge!=yourAge || myName!=yourName) println("At least one parameter in data sets is different")
}