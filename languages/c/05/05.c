// scope of variables
#include<stdio.h>

int fun(); // function prototype

int global_var = 10;

int main(){
	int local_main_var = 0;
	{
		int nested_main_var;
		local_main_var = 1;
		// we can also redefine local_main_var
		// changes made to it would then not be saved
		// int local_main_var = 10;
	}
	// printf("%d",nested_main_var); // out of scope
	printf("%d",local_main_var); // changes made in block took effect
	return 0;
}

int fun(){
	int local_fun_var;
}