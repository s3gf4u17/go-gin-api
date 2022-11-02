// function overload
fun main(){
    printUserInfo(12)
    printUserInfo(name="Bob")
    printUserInfo(false)
}

fun printUserInfo(age:Int) = println("age: $age")

fun printUserInfo(name:String) = println("name: $name")

fun printUserInfo(dead:Boolean) = println("dead: $dead")