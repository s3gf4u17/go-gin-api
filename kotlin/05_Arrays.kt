fun main() {
    val names : Array<String> = arrayOf("Jim","John","Jenny","James")
    val manyTypes = arrayOf(1, "Hi")
    val nested = arrayOf(arrayOf(1,2,3),arrayOf(1,2,3))

    println("Number of names ${names.size}")
    println("First name is ${names[0]}")
    names[0] = "Jeremy"
    println("First name changed to ${names[0]}")
    println("Second name length: ${names[1].length}")

    println("many types: ${manyTypes}")
    println("nested: ${nested}")

    // arrayOf(1,2,3) -> Integer[]
    // intArrayOf(1,2,3) -> int[]
    // IntArray(9) -> int[9]
}