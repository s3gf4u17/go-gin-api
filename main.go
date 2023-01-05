package main

import "fmt"
import "net/http"
import "go-web-server/endpoint"

func main() {
	fmt.Printf("Running ...\n")
	http.HandleFunc("/book/",endpoint.IndexHandler)
	http.ListenAndServe("127.0.0.1:8080",nil)
}