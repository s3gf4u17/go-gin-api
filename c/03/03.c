// printf
#include<stdio.h>

// placeholders begin with %:
// %i - integer
// more here https://cplusplus.com/reference/cstdio/printf/

int main(){
	printf("printf()");
	printf("%i",0);
	printf("%i%i",0,1);
	printf("%d",printf("%s","Hello world!")); // printf not only prints but also returns number of characters printed
	return 0;
}