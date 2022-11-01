fun main(){
    greetUser(reps=4)
}

fun greetUser(username:String="Hans",reps:Int=1){
    for (i : Int in 0 until reps) println("Hello $username")
}