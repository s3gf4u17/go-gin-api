fun main(){
    val max1 = getMax(2,3)
    println(max1)
    val max2 = getMax(5.23,4.17)
    println(max2)
    val max3 = getMax(1,2,100)
    println(max3)
}

fun getMax(arg1:Int,arg2:Int) : Int = if (arg1>arg2) arg1 else arg2
fun getMax(arg1:Double,arg2:Double) : Double = if (arg1>arg2) arg1 else arg2
fun getMax(a:Int,b:Int,c:Int) : Int = 
    when {
        a>=b && b>=c -> a
        a<=b && b>=c -> b
        else -> c
    }