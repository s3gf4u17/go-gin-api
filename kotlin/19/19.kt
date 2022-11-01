// nested functions
fun main(){
    firstLevel()
}

fun firstLevel(){
    println("you entered the first level")

    fun secondLevel(){
        println("you entered the second level")
    }

    secondLevel()
}