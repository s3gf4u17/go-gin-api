fun main() {
    val maxInt : Int = getMaxInt(1,7)
    println(maxInt)
    voidFunction(45)
}

fun getMaxInt(arg1:Int, arg2:Int) : Int{
    return if (arg1>arg2) arg1 else arg2
}

fun voidFunction(arg1:Int) : Unit{
    println("void function called $arg1")
    return
}