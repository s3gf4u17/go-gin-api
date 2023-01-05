package endpoint

import "go-web-server/data"
import "strconv"
import "strings"
import "encoding/json"
import "go-web-server/log"
import "net/http"

func IndexHandler(w http.ResponseWriter, r *http.Request) {
	id,err := strconv.Atoi(strings.TrimPrefix(r.URL.Path, "/book/"))
	if err != nil || id>len(data.Books)-1 {
		w.WriteHeader(400)
		log.Log(r,400)
		w.Write([]byte("400 bad request"))
		return
	}
	log.Log(r,200)
	w.Header().Set("Content-Type", "application/json")
	cont := data.Books[id]
	json.NewEncoder(w).Encode(cont)
}