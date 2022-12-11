package structs

type Point struct {
	X int32
	Y int32
}

// embedded struct
type Circle struct {
	Radius float64
	Center *Point // we dont even have to name it
}

func ChangeX(pt *Point, x int32){
	(*pt).X = x
}