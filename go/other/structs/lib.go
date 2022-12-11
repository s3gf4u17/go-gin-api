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

// struct method
func (c *Circle) GetArea() float64 {
	return c.Radius*c.Radius*3.14159
}

func ChangeX(pt *Point, x int32){
	(*pt).X = x
}

func abs(x float64) float64 {
	if x < 0 {
		return -x
	} else {
		return x
	}
}

func Sqrt(x float64) (float64,int) {
	var resp float64 = 1.0
	var chng float64 = 0.0
	var step int = 0
	for {
		chng = (resp*resp-x)/(2*resp)
		if abs(chng) < 0.000001 {break}
		resp -= chng
		step++
	}
	return resp, step
}