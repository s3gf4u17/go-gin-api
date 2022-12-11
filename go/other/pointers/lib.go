package pointers

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

// modify F1 value
func DirectModify(a int){
	F1 += a
}

// modify F1 value through pointer
func IndirectModify(a int){
	F2 := &F1 // get pointer to F1 and name it F2
	*F2 += a // dereference operator
}

// change value of target with its pointer
func ChangeValue(target *int, a int){
	*target += a
}

func BasicTest() *string {
	var a string = "hello"
	var b *string = &a
	return b
}