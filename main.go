package main

import "net/http"
import "flag"
import "fmt"
// import "gost/lib"

var varHost = flag.String("host","127.0.0.1","")
var varPort = flag.String("port","8000","")


func main() {
	flag.Parse()
	URL:=fmt.Sprintf("%s:%s",*varHost,*varPort)
	http.ListenAndServe(URL,nil)
}