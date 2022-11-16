// variables
#include<stdio.h>

// naming conventions for variables:
// combination of letters (upper and lower case) and digits
// beginning names with a digit is invalid
// beginning names with underscore is valid but not recommended
// special characters are not allowed
// blanks or white spaces are not allowed

int main(){
	int var1;
	var1 = 0;
	printf("%i",var1);
	int var2 = 0;
	printf("%i",var2);

	int var3, var4, var5;
	var3 = var4 = var5 = 1;
	printf("%i",var3);
	printf("%i",var4);
	printf("%i",var5);
	return 0;
}