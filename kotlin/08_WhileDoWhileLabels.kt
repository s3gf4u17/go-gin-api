fun main() {
    // var a = 0
    // while (a < 5){
    //     println(a)
    //     a++
    // }

    // var b = 0
    // do{
    //     println(b)
    //     b++
    // } while (b < 0)

    var c = 0
    outer@ while (true){
        c++
        if (c>=100000) break@outer
    }
}