fun main() {
    val months : Array<String> = arrayOf("January","February","March","April","May")

    //for (month : String in months) println(month)

    //for (i : Int in 1..10)println(i)

    //val a = 5
    //for (i : Int in 1 until a) println(i)

    //for (i : Int in 5 downTo 3) println(i)

    //for (i : Int in 1..10 step 2)println(i)

    //for (i : Char in 'a'..'z' step 2)println(i)

    for (index : Int in months.indices){
        println("Index: $index Element: ${months[index]}")
    }
}