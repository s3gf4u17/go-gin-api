#include<stdio.h>

int longestPalindrome(char * s){
    int length = 0;
    int total = 0;
    int* chars = calloc(256,sizeof(int));
    
    int i = 0;
    while(s[i]!=NULL){
        if (chars[s[i]]==0){
            chars[s[i]]=1;
            total++;
        } else {
            chars[s[i]]=0;
            length=length+2;
            total--;
        }
        i++;
    }
    
    if (total>0) length++;
    
    return length;
}