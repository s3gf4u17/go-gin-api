// NULLABLE SAFE CALLS
fun main(){
    val firstname : String = "Bob"
    val length1 : Int = firstname.length
    println("length: $length1 firstname: $firstname")

    var lastname : String? = "Bobbinson"
    lastname = null
    val length2 : Int? = lastname?.length
    println("length: $length2 lastname: $lastname")

    val length3 : Int = if (lastname!=null) lastname.length else 0
    println("length: $length3 lastname: $lastname")

    val length4 : Int? = lastname?.substring(0,2)?.length // substring grabs the first 2 characters
    println("length: $length4 lastname: $lastname")

    val length5 : Int? = lastname?.substring(0,5)?.drop(2)?.substring(0,2)?.length // drop drops the second character
    println("length: $length5 lastname: $lastname")
}