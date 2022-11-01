// vararg
fun main(){
    printBookInfo("Wonder tales of a red wolf","James McAulast")
    printBookInfo("Deep physics in slices of cheese","Nora Bibom","Bob Bobbinson")
}

fun printBookInfo(title:String,vararg authors:String){
    println("Book title: $title.\nAuthors:")
    authors.forEach{println(it)}
}