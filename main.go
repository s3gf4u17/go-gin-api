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
    max-width: 900px;
    padding: 0 10px;
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
    padding: 10px 0;
}
</style>
</head>
<body>
<div id="container">
<h3>Gost Static Web Server</h3>
This is the default gost page meaning it requires some configuration. Code is distributed open-source in  
<a href="https://github.com/s3gf4u17/gost">this</a> 
repo. To learn more about configuration check the official manual 
<a href="https://github.com/s3gf4u17/gost/blob/master/README.md">here</a>.
<br><br><br>
By using gost you agree to sharing contents of your disk via internet. Authors do not take responsibility for badly configured program.
</div>
</body>
</html>
`