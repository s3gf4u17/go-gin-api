package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

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

	// LOOPS

	fmt.Printf("%T %T %q %T %d\n", v4, v5, v7.Text(), v9, v9)
	fmt.Println(v1, v2, v3, v4, v5, v6, v10, v11, math.Pi, v12)
}
