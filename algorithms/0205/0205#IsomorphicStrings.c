#include<stdbool.h>

bool isIsomorphic(char * s, char * t){
    char *a = malloc(sizeof(char)*256);
    char *b = malloc(sizeof(char)*256);
    for (int i = 0 ; i < 26 ; i++){a[i]=-1;b[i]=-1;}
    
    while(*s && *t){
        if(a[*s]<0) a[*s]=*t;
        else{
            if(a[*s]!=*t) return false;
        }
        
        if(b[*t]<0) b[*t]=*s;
        else{
            if(b[*t]!=*s) return false;
        }
        s++;t++;
    }
    
    return true;
}