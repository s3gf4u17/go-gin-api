// single line expressions
fun main(){
    sayHi(21)
    val delta = calculateDelta(a=3,b=7,c=4)
    println(delta)
}

fun sayHi(age:Int) = if (age<18) println("Hi!") else println("Hello!")

fun calculateDelta(a:Int,b:Int,c:Int):Int = b*b-4*a*c