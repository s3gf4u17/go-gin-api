package main

import "os"
import "io/ioutil"
import "net/http"
import "strings"
import "flag"

var (
	varPort = flag.String("port","8080","Listen port")
)

func main() {
	http.HandleFunc("/",route)
	http.ListenAndServe("127.0.0.1:8080",nil)
}

func route(w http.ResponseWriter, r *http.Request) {
	filename := strings.TrimPrefix(r.URL.Path, "/") + ".json"
	jsonFile,err := os.Open(filename)
	if err != nil {
		w.WriteHeader(400)
		w.Write([]byte("400 bad request"))
		return
	}
	jsonContent,_ := ioutil.ReadAll(jsonFile)
	defer jsonFile.Close()
	w.Header().Set("Content-Type", "application/json")
	w.Write(jsonContent)
}