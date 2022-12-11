package foo

/*
only variables starting with capital
letter are accessible as public
*/

// test value
var F1 int = 32

// get memory location of F1
func GetLocation() *int {
	return &F1
}