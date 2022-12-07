package main

import "fmt"

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
	fmt.Printf("%T %T\n", v4, v5)
	fmt.Println(v1, v2, v3, v4, v5, v6)

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

	// strings
	// var nameOne string = "bob"
	// var nameTwo = "Bobbinson"
	// var nameThree string
	// fmt.Println(nameOne, nameTwo, nameThree)
	// nameThree = nameOne
	// nameOne = "rob"
	// fmt.Println(nameOne, nameTwo, nameThree)
	// nameFour := "mob" // cannot be used outside a function
	// fmt.Println(nameFour)

	// // ints
	// var age1 int = 20
	// var age2 = 30
	// var age3 int
	// age4 := 40
	// fmt.Println(age1, age2, age3, age4)

	// // bits and memory
	// var num1 int8 = 25 // num16, num32, num64 also exist
	// fmt.Println(num1)
	// var num2 uint8 = 25 // unsigned
	// fmt.Println(num2)

	// // floats
	// var score1 float32 = 1.0 // float32, float64
	// fmt.Println(score1)
	// score2 := 1.5 // default -> float64
	// fmt.Println(score2)
}
