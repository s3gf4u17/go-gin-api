// named parameters in functions
fun main(){
    printUserInfo(id=0,"Bob",surname="Bobbinson",age=32,mustache=false)
}

fun printUserInfo(id:Int,name:String,surname:String,age:Int,mustache:Boolean){
    val userInfo = """
    user id: $id
    name: $name
    surname: $surname
    mustache: $mustache
    """.trimIndent()
    println(userInfo)
}