package main

// go mod init example/go
// go get github.com/gin-gonic/gin

import "net/http"
import "github.com/gin-gonic/gin"
import "errors"

// struct to store book data
// capital case make variables available publicly for other modules
// in json we want them to be lowercase
type book struct{
	ID string `json:"id"`
	Title string `json:"title"`
	Author string `json:"author"`
	Quantity int `json:"quantity"`
}

// test list of books
var books = []book{
	{ID:"1",Title:"In search of Lost Time",Author:"Marcel Proust",Quantity:17},
	{ID:"1",Title:"In search of Lost Time",Author:"Marcel Proust",Quantity:17},
	{ID:"1",Title:"In search of Lost Time",Author:"Marcel Proust",Quantity:17}
}

func main() {

}