package main

import "net/http"
import "flag"
import "fmt"

var varHost = flag.String("host","127.0.0.1","")
var varPort = flag.String("port","8000","")
var varPath = flag.String("path",".","")

func main() {
	flag.Parse()
	URL:=fmt.Sprintf("%s:%s",*varHost,*varPort)
    http.HandleFunc("/html/",serveHTML)
	http.HandleFunc("/",serveDEFAULT)
	http.ListenAndServe(URL,nil)
}

func serveHTML(w http.ResponseWriter, r *http.Request) {
    filepath := r.URL.Path
    if filepath=="/html/" {
        http.ServeFile(w,r,*varPath+"/html/index.html")
        return
    }
    http.ServeFile(w,r,*varPath+filepath)
}

func serveDEFAULT(w http.ResponseWriter, r *http.Request) {
	w.Write([]byte(defaultHTML))
}

var defaultHTML string = `
<!DOCTYPE html>
<html>
<head>
<title>Gost SWS</title>
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
<h3>Hello, Gost!</h3><hr>
This is the default gost page meaning it requires some configuration. Code is distributed open-source in <a href="https://github.com/s3gf4u17/gost">this</a> repo. To learn more about configuration check the official manual <a href="https://github.com/s3gf4u17/gost/blob/master/README.md">here</a>.<br><br>
<b>Release notes version 0.0.1:</b>
<ul>
<li>serve html pages stored in <i>html</i> folder using <textarea rows="1" cols="39" readonly>gost -port=8000 -path=[path to project]</textarea> </li>
</ul>
By using gost you agree to sharing contents of your disk via internet. Authors do not take responsibility for badly configured program.
</div>
</body>
</html>
`