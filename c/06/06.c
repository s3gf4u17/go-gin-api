// variable modifiers - auto && extern && register && static
#include<stdio.h>
#include"variable.c"
#include"increment.c"

int outer = 0;

extern int var;

int main(){
	// int var === auto int var
	// auto is used automatically
	// if you wont initialize var, it will be initialized with some garbage inside
	// global variables by default initialize to 0

	// on the other hand
	// int var !== extern int var
	// int var declares variable and allocates memory for it (definition)
	// extern int var only declares variable to the compiler
	// used when you need to access a variable from a different file
	// printf("%d",var);

	// extern int outer;
	// printf("%d",outer);

	// register dataType variable
	// it hints the compiler to store the variable in a register memory
	// this reduces access time greatly

	int value;
	value = incr();
	value = incr();
	value = incr();
	printf("%i",value);

	return 0;
}