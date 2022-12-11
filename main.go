package main

// go mod init example/go
// go get github.com/gin-gonic/gin

import "net/http"
import "github.com/gin-gonic/gin"
// import "errors"

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
	{ID:"2",Title:"The Great Gatsby",Author:"F. Scott Fitzgerald",Quantity:5},
	{ID:"3",Title:"War and Peace",Author:"Leo Tolstoy",Quantity:2},
}

// accept context as an argument
func getBooks(c *gin.Context) {
	c.IndentedJSON(http.StatusOK, books)
}

func main() {
	router := gin.Default()
	// route localhost/books to getBooks function
	router.GET("/books",getBooks)
	// start api on localhost port 8080
	router.Run("localhost:8080")
}