package main

import "fmt"

func main() {
	// fmt.Println("Hello World!")

	// strings
	var nameOne string = "bob"
	var nameTwo = "Bobbinson"
	var nameThree string
	fmt.Println(nameOne, nameTwo, nameThree)
	nameThree = nameOne
	nameOne = "rob"
	fmt.Println(nameOne, nameTwo, nameThree)

	nameFour := "mob" // cannot be used outside a function
	fmt.Println(nameFour)

	// ints
	var age1 int = 20
	var age2 = 30
	var age3 int
	age4 := 40
	fmt.Println(age1, age2, age3, age4)

	// bits and memory
	var num1 int8 = 25 // num16, num32, num64 also exist
	fmt.Println(num1)
	var num2 uint8 = 25 // unsigned
	fmt.Println(num2)

	// floats
	var score1 float32 = 1.0 // float32, float64
	fmt.Println(score1)
	score2 := 1.5 // default -> float64
	fmt.Println(score2)
}
