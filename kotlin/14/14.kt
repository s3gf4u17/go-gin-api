// NULLABLE TYPES
fun main(){
    var name1 = "Bob"
    // name1 = null // null can not be a value of a non-null type String
    println(name1)

    var name2 : String? = "Bob"
    name2 = null
    println(name2)

    var age1 : Int = 12
    // age1 = null // overload resolution ambiguity
    println(age1)

    var age2 : Int? = 12
    age2 = null
    println(age2)

    var person1 = Person("Bob")
    // person1 = null // overload resolution ambiguity
    println(person1)

    var person2 : Person? = Person("Bob")
    person2 = null
    println(person2)
}


class Person(var name:String)