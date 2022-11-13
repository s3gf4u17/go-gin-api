#include<stdbool.h>

bool isSubsequence(char * s, char * t){
    while (*t && *s){
        if (*s==*t){
            s++;
        }
        t++;
    }
    return !*s;
}