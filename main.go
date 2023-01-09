package main

import "net/http"
import "flag"
import "fmt"
import "strings"
import "os"

var varHost = flag.String("host","127.0.0.1","")
var varPort = flag.String("port","8000","")
var varPath = flag.String("path",".","")

func main() {
	flag.Parse()
	URL:=fmt.Sprintf("%s:%s",*varHost,*varPort)
	http.HandleFunc("/",handleRequest)
	http.ListenAndServe(URL,nil)
}

func handleRequest(w http.ResponseWriter, r *http.Request) {
    sourcePath:=strings.TrimPrefix(r.URL.Path,"/")
    _,err:=os.Stat(*varPath+"/index.html")
    if sourcePath=="" && err==nil {
        http.ServeFile(w,r,*varPath+"/index.html")
    } else if sourcePath=="" {
        w.Write([]byte(defaultHTML))
    } else {
        fileInfo,err:=os.Stat(*varPath+"/"+sourcePath)
        if err!= nil || fileInfo.IsDir() {
            w.Write([]byte("404 page not found"))
        } else {
            http.ServeFile(w,r,*varPath+"/"+sourcePath)
        }
    }
}

var defaultHTML string = `
<!DOCTYPE html>
<html>
<head>
<title>Delve SWS</title>
<style>
body{
    background-color: #29beb0;
    padding: 0;
    margin: 0;
}
#container{
    max-width: 860px;
    padding: 0 20px;
    margin: auto;
    min-height: 100vh;
    text-align: justify;
    background-color: white;
}
h3{
    margin: 0;
    display: inline-block;
    width: 100%;
    text-align: center;
    padding: 10px 0 0 0;
}
.err{
    color:red;
}
textarea{
    resize: none;
    position: relative;
    top: 2px;
}
a{
    color: #29beb0;
}
</style>
</head>
<body>
<div id="container">
<h3>Hello, Delve!</h3><hr>
<b>Release notes version 1.0:</b>
<ul>
<li>serve content from project directory</li>
</ul>
By using Delve you agree to sharing contents of your disk via internet. Authors do not take responsibility for badly configured program.
</div>
</body>
</html>
`