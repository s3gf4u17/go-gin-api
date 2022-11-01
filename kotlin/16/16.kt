// elvis operator
fun main() {
    val lastName : String? = "Bobbinson"

    var length1 : Int = if (lastName!=null) lastName.length else 0 // 0 or 6
    var length2 : Int = lastName?.length ?: 0 // if anything on the left of ?: is null -> change it to 0
    println(length1)
    println(length2)
}