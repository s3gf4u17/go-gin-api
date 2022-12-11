package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

func abs_val(x int) int {
	if x < 0 {
		x = -x
	}
	return x
}

func add(x, y int) int {
	return x + y
}

func minmax(x, y int) (int, int) {
	if x > y {
		return y, x
	} else {
		return x, y
	}
}

// returns z and zz values hardcoded in the function body
func get_zzz() (z int, zz int) {
	defer fmt.Println("Hello return") // defer will wait with execution till it hits return keyword
	z = 1
	zz = 2
	fmt.Println("Hello ret... defer(?)")
	return
}

func test() {
	fmt.Println("test function called")
}

func main() {
	// HELLO WORLD
	// fmt.Println("Hello World!")

	// VARIABLES && DATA TYPES
	var v1 string = "Hello"
	var v2 string
	v2 = "World"
	// available types:
	// uint8, uint16, uint32, uint64
	// int8, int16, int32(rune), int64
	// uint, int, uintptr - machine dependent
	// float32, float64 - floating point numbers
	// complex64, complex128 - imaginary numbers
	// string, bool

	// IMPLICIT VS EXPLICIT
	var v3 uint16 = 260 // explicit
	var v4 = 261        // implicit (go guesses the type)
	v5 := 262           // walrus operator
	var v6 bool         // check bool default value

	// FMT MODULE
	// fmt.Printf("Hello %T %v", 10, 10)
	// var x string = fmt.Sprintf("Hello %T %v", 10, 10)
	// v - value
	// T - type
	// %% - %
	// t - bool
	// b o d x - integer bases (2, 8, 10, 16)
	// e f g - float (scientific, decimal no exponent, large exponents)
	// WIDTH AND PRECISION
	// s q - strings (string, double quoted string)
	// f - default width default precision
	// 9f - 9 width default precision
	// .2f - default width 2 precision
	// 9.2f - 9 width 2 precision
	// 9.f - 9 width 0 precision
	// PADDING
	// 09d pads digit to length 9 with preceeding 0s
	// -4d pads with spaces, width 4, left justified

	// CONSOLE INPUT
	v7 := bufio.NewScanner(os.Stdin)
	// fmt.Printf("type something: ")
	// v7.Scan()

	// TYPE CONVERSION
	v8 := bufio.NewScanner(os.Stdin)
	// v8.Scan()
	v9, _ := strconv.ParseInt(v8.Text(), 10, 64) // size 10, size 64

	// ARITHMETIC OPERATORS
	// +, -, /, *, %
	v10 := 10 + 12
	// types need to be the same
	// we cant add int8 to int 32 etc
	v11 := float64(v10) / 8.0

	// CONDITIONS
	// >, >=, <, <=, ==, !=
	v12 := v10 > 10

	// CHAINED CONDITIONALS
	// || or, && and

	// CONDITIONAL STATEMENTS
	if v12 {
		v12 = false
		if v12 {
			v12 = false
		} else {
			v12 = true
		}
	}

	v13 := 0
	// LOOPS
	for v13 < 3 {
		v13++
	}

	for x := 0; x < 5; x++ {
		v13++
	}

	for {
		if v13 == 0 {
			continue
		}
		break
	}

	// SWITCH
	switch v13 {
	case 8, 7:
		v13++
	case 9:
		v13--
	default:
		v13 *= 3
	}

	switch {
	case v13 == 8:
		v13++
	case v13 == 9:
		v13--
	default:
		v13 *= 3
	}

	// ARRAYS
	var v14 [3]int
	v14[0] = -1
	v15 := [3]int{1, 2, 3}
	v16 := 0
	v17 := [3][2]int{{1, 2}, {3, 4}, {5, 6}}
	for i := 0; i < len(v15); i++ {
		v16 += v15[i]
	}

	// SLICES
	var v18 []int = v15[:1] // grabs all values from v15 except first
	var v19 []int = []int{1, 2, 3, 4, 5, 6, 7, 8}
	v19 = append(v19, 9) // appending creates a new slice
	v20 := make([]int, 5)

	// RANGE
	var v21 []int = []int{534, 4, 234, 3}
	// _ stands for anonymous variable, allows us to ignore index
	for _, element := range v21 { // range creates an iterator
		fmt.Println(element)
	}

	// MAPS
	// maps do not keep order of the elements inside !!!
	var v22 map[int]string = map[int]string{
		1: "test1",
		2: "test2",
	}

	v23 := map[int]string{
		1: "test1",
		2: "test2",
	}

	v24 := make(map[int]string) // creates an empty map

	v23[1] = "changedValue"
	v24[2] = "newValue"
	delete(v23, 2)

	// len(map) - will show how many elements are stored in a map

	v25, ok1 := v24[2]
	v26, ok2 := v24[33]
	// if key 2 exists, store value in val
	//if not - make val the default value for a stored type

	// FUNCTIONS
	v27 := abs_val(10)
	v28 := abs_val(-5)
	v29 := add(1, 2)
	v30, v31 := minmax(100, 20) // v30 <- min, v31 <- max
	v32, v33 := get_zzz()

	fmt.Printf("%T %T %q %T %d %T %T\n", v4, v5, v7.Text(), v9, v9, v14, v20)
	fmt.Println(v1, v2, v3, v4, v5, v6, v10, v11, math.Pi, v12, v13)
	fmt.Println(v14, v14[0], v15, len(v15), v16, v17, v18, len(v18), cap(v18), v18[:cap(v18)])
	fmt.Println(v22, v23, v24, v25, ok1, v26, ok2)
	fmt.Println(v19, v20, v21, v27, v28, v29, v30, v31, v32, v33)

	// ADVANCED FUNCTIONS AND FUNCTION CLOSURES
	x := test // we can assign any function to a variable
	x()
	fmt.Printf("%T\n", x)
	// we can also define function in a js way
	y := func(x int) int {
		return x * -1
	}(8) // and even call in definition
	fmt.Println(y)
	test2(x)
	z := func(a int) int {
		return a
	}
	test3(z)
	returnFunc("name")()

	// MUTABLE AND IMMUTABLE DATA TYPES
	var a1 int = 5 // (immutable)
	a2 := a1       // assign value of a1 to variable a2
	a2 = 10
	fmt.Println(a1, a2)
	var a3 []int = []int{1, 2, 3} // (mutable) (slice)
	a4 := a3                      // assigns a3 and a4 to the same slice in memory
	a4[0] = 4                     // changing a4 changes a3 as well, that means that slices are just memory addresses
	fmt.Println(a3, a4)
	var a5 [2]int = [2]int{1, 2} // simple array with fixed length (also mutable)
	a6 := a5
	a6[0] = 3
	fmt.Println(a5, a6) // by this behavior we see that line a6 := a5 simply creates new copy of this array
	// a5 contains array in itself while a3 is only an address
	var a7 []int = []int{1, 2, 3}
	fmt.Println(a7)
	changeFirst(a7, 4)
	fmt.Println(a7)
}

// we can pass functions as arguments
func test2(x func()) {
	x()
}

func test3(z func(int) int) {
	fmt.Println((1))
}

func returnFunc(x string) func() {
	// function closure - uses a value defined outside (here x from returnFunc)
	return func() {
		fmt.Println("returned:", x)
	}
}

func changeFirst(slice []int, a int) {
	slice[0] = a
}
