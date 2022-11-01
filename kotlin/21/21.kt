// function arguments
fun main(){
    doWork(3,"Bob",true)
    doWork(5,"Bobbinson",false)
}

fun doWork(reps:Int,name:String,finished:Boolean){
    for (i : Int in 1..reps) println("work #$i done by $name -- finish status [$finished]")
}