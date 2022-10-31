fun main() {
    println("2 > 1 is ${2>1}")
    println("2 < 1 is ${2<1}")
    println("1 >= 1 is ${1>=1}")
    println("1 == 1 is ${1==1}")
    println("1 != 2 is ${1!=2}")
    println("2 != 2 is ${2!=2}")

    println("!(2 > 1) is ${!(2>1)}")
    
    println("true && false is ${true && false}")
    println("true || false is ${true || false}")

    val condition : Boolean = 2 > 1 || 3 > 2 && 2 > 3
    println(condition)
}