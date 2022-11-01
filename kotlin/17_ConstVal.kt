var topLevelVariable : String = "i am a top level variable"
const val CONST_STRING : String = "i am a global constant"

fun main(){
    println(topLevelVariable)
    topLevelVariable = "i have changed"
    println(topLevelVariable)
    // CONST_STRING="i cannot be changed"
    println(CONST_STRING)
}