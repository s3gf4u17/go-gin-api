// operators
#include<stdio.h>
#include<stdbool.h>

// arithmetic operators ex: +,-,*,/,%,++,--
// relational operators ex: ==,!=,<=,>=,<,>
// logical operators ex: &&,||,!
// bitwise operators ex: &,^,|,~,>>,<<
// others ex: ?:,&,*,sizeof()

int main(){
	printf("%i+%i=%i\n",2,1,2+1);
	printf("%i-%i=%i\n",2,1,2-1);
	printf("%i*%i=%i\n",4,2,1*2);
	printf("%i/%i=%i\n",4,2,1/2);
	printf("%i%%%i=%i\n",5,2,5%2);

	// lvalue - an object that has an identifiable location in memory
	// rvalue - an object that has no identifiable location in memory

	printf("%i>%i=%i\n",2,1,2>1);
	printf("%i<%i=%i\n",2,1,2<1);
	printf("%i==%i=%i\n",2,1,2==1);
	printf("%i!=%i=%i\n",2,1,2!=1);
	printf("%i>=%i=%i\n",2,1,2>=1);
	printf("%i<=%i=%i\n",2,1,2<=1);

	printf("%i&&%i=%i\n",true,true,true&&true);
	printf("%i&&%i=%i\n",true,false,true&&false);
	printf("%i&&%i=%i\n",false,false,false&&false);
	printf("%i||%i=%i\n",true,true,true||true);
	printf("%i||%i=%i\n",true,false,true||false);
	printf("%i||%i=%i\n",false,false,false||false);
	printf("!%i=%i\n",false,!false);
	printf("!%i=%i\n",true,!true);

	// && - if a false condition occurs, the conditions after it wont be calculated
	// || - if a true condition occurs, the conditions after it wont be calculated
	// its called short-circuit

	// bitwise operators
	// & and, | or, ~ not, << left shift, >> right shift, ^ xor
	printf("1&0=%i\n",1&0);
	printf("1|0=%i\n",1|0);
	printf("~7=%i\n",~7); // 7 = 0111 -> ~ -> 1000 = 8

	char var = 3; // 0000 0011
	// when shifting, new positions are filled with 0s
	printf("%i\n",var<<1); // 0000 0110 - equals multiplying by 2^operand (here operand 1)
	printf("%i\n",var>>1); // 0000 0001 - equals dividing by 2^operand (here operand 1)

	// xor table
	// 0 xor 0 = 0
	// 0 xor 1 = 1
	// 1 xor 0 = 1
	// 1 xor 1 = 0

	// assignment operators
	char a = 7; // 0000 0111
	a ^= 5;
	// 0000 0111
	// 0000 0101
	// 0000 0010 -> a = 2
	printf("%i\n",printf("%d",a+=3)); // a += 3 -> a = 5 | printf prints only 1 char so the final result is: 51

	// conditional operator
	bool condition = true;
	int result = condition ? 5 : 7;
	printf("%i\n",result);

	// comma operator - can be used not only as a separator but also:
	int comma = (3,4,7);
	printf("%i\n",comma);
	comma = 3,4,7; // here it works as a separator
	printf("%i\n",comma);
	// returns the rightmost operand in the expression evaluating the rest and rejecting them
	// comma is an operator with the lowest precedence (operators with high are calculated first)
	// another thing is operators associativity (left to right or left to right order when operators have the same precedence)

	return 0;
}