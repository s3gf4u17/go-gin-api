package main

import "fmt"

func main() {
	// HELLO WORLD
	// fmt.Println("Hello World!")

	// VARIABLES && DATA TYPES
	var v1 string = "Hello"
	var v2 string
	v2 = "World"
	fmt.Println(v1, v2)
	// available types:
	// uint8, uint16, uint32, uint64
	// int8, int16, int32(rune), int64
	// uint, int, uintptr - machine dependent
	// float32, float64 - floating point numbers
	// complex64, complex128 - imaginary numbers
	// string, bool

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
