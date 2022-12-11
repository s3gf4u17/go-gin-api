package shapes

import "math"

type Shape interface {
	GetArea() float64
}

type Rectangle struct {
	Width float64
	Height float64
}

type Circle struct {
	Radius float64
}

func (r *Rectangle) GetArea() float64 {
	return r.Width * r.Height
}

func (c *Circle) GetArea() float64 {
	return math.Pi*c.Radius*c.Radius
}