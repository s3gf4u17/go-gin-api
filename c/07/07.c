// constants
#include<stdio.h>

// they can be defined using #define or using const keyword

#define FIRST_METHOD 0
const int SECOND_METHOD = 0;

// we can use macros as functions
#define add(x,y) x+y

// use multiple lines with back slash
#define greater(x,y) if(x>y) printf("%i>%i",x,y); \
else printf("%i<%i",x,y);

int main(){
	printf("%i%i",FIRST_METHOD,SECOND_METHOD);
	printf("%i",add(1,2));
	greater(1,2);

	// we can use predefined macros
	printf("\n%s",__DATE__);
	printf("\n%s",__TIME__);

	return 0;
}