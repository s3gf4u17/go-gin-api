// default argument values
fun main(){
    printUserInfo(name="Bob",surname="Bobbinson")
    printUserInfo(id=1,surname="Bobbinson")
    printUserInfo(name="Bob",id=2)
    printUserInfo(id=3)
    printUserInfo()
}

fun printUserInfo(id:Int=0,name:String?=null,surname:String?=null){
    println("U#$id - $name, $surname")
}