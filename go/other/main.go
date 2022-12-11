// go mod init <folder-name>
package main

import (
	"fmt"
	// "other/pointers"
	// "other/structs"
	"other/shapes"
)

func main() {
	r := shapes.Rectangle{2,3}
	c := shapes.Circle{1}
	s := []shapes.Shape{&r,&c}
	// i can only use GetArea() method because thats the only one interface knows
	fmt.Printf("%v %v\n",s[0].GetArea(),s[1].GetArea())

	// fmt.Println(pointers.F1)
	// fmt.Println(pointers.GetLocation())
	// pointers.DirectModify(32)
	// fmt.Println(pointers.F1)
	// pointers.IndirectModify(-32)
	// fmt.Println(pointers.F1)
	// pointers.ChangeValue(&pointers.F1,32)
	// fmt.Println(pointers.F1)
	// fmt.Println(pointers.BasicTest())
	// fmt.Println(*pointers.BasicTest())

	// var p1 structs.Point = structs.Point{1,2}
	// var p2 structs.Point = structs.Point{5,3}
	// fmt.Println(p1.X, p1.Y)
	// fmt.Println(p2.X, p2.Y)
	// p3 := p2 // creates a new, non connected "object"
	// p3.X = 7
	// fmt.Println(p2.X, p3.X)
	// p4 := structs.Point{X:3} // gives Y a default int 32 value
	// structs.ChangeX(&p4,999)
	// fmt.Println(p4.X, p4.Y)
	// c1 := structs.Circle{10,&structs.Point{0,0}}
	// fmt.Println(c1, c1.Center.X,c1.GetArea())
}
