package log

import "fmt"
import "time"
import "net/http"

func Log(r *http.Request, rc int32) {
	color:=""
	if rc == 200 {color = "\033[32m"} else {color = "\033[31m"}
	fmt.Printf("%s\t%s%d%s\t%s\n",time.Now().Format("2006.01.02 15:04:05"),color,rc,"\033[0m",r.URL.Path)
}