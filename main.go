package main

import "net/http"
import "flag"
import "fmt"
// import "gost/lib"

var varHost = flag.String("host","127.0.0.1","")
var varPort = flag.String("port","8000","")
var varPath = flag.String("path",".","")


func main() {
	flag.Parse()
	URL:=fmt.Sprintf("%s:%s",*varHost,*varPort)
	http.HandleFunc("/",serveHTML)
	http.ListenAndServe(URL,nil)
}

func serveHTML(w http.ResponseWriter, r *http.Request) {
	http.ServeFile(w,r,*varPath+"/index.html")
}