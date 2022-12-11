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
	{ID:"2",Title:"The Great Gatsby",Author:"F. Scott Fitzgerald",Quantity:5},
	{ID:"3",Title:"War and Peace",Author:"Leo Tolstoy",Quantity:2},
}

// accept context as an argument
func getBooks(c *gin.Context) {
	c.IndentedJSON(http.StatusOK, books)
}

func getBook(c *gin.Context) {
	id := c.Param("id") // path parameter
	book, err := getBookById(id)
	if err != nil {return}
	c.IndentedJSON(http.StatusOK,book)
}

func createBook(c *gin.Context) {
	var newBook book
	// check if there is any error
	if err := c.BindJSON(&newBook); err!= nil {
		return // automatically creates error response
	}
	books = append(books,newBook)
	c.IndentedJSON(http.StatusCreated,newBook)
}

// error handling
func getBookById(id string) (*book, error) {
	for i, b := range books {
		if b.ID == id {
			return &books[i], nil
		}
	}
	return nil, errors.New("book not found")
}

func main() {
	router := gin.Default()
	// route localhost/books to getBooks function

	router.GET("/books",getBooks)
	// curl localhost:8080/books

	router.POST("/books",createBook)
	// curl -X POST localhost:8080/books -H "Content-Type: application/json" -d @body.json

	router.GET("/books/:id",getBook)
	// curl -X GET localhost:8080/books/2

	// start api on localhost port 8080
	router.Run("localhost:8080")
}