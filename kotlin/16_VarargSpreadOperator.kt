fun main(){
    // println(getSum(arrayOf(1,2,3)))
    println(getSum(true,1,2,3))

    val array : IntArray = intArrayOf(1,2,3,4,5,6,7,8,9)
    println(getSum(false,100,*array,1000)) // * spread operator
}

// fun getSum(numbers: Array<Int>): Int{
//     var sum : Int = 0
//     for (number in numbers) sum += number
//     return sum
// }

fun getSum(double:Boolean,vararg numbers:Int) : Int{
    var sum = 0
    for (number in numbers) sum += number
    return if (double) sum * 2 else sum
}