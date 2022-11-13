// data types
#include<stdio.h>
#include<limits.h>

int main(){
	// INTEGER
	int bits_int = sizeof(int)*8; // sizeof() is an unary operator
	int bits_long = sizeof(long int)*8;
	int bits_short = sizeof(short int)*8;
	int bits_unsigned = sizeof(unsigned int)*8;

	printf("bits in int: %d",bits_int);
	printf("\nbits in long int: %d",bits_long);
	printf("\nbits in short int: %d",bits_short);
	printf("\nbits in unsigned int: %d",bits_unsigned);

	printf("\n\nint range: <%i,%i>",INT_MIN,INT_MAX);
	printf("\nlong range: <%li,%li>",LONG_MIN,LONG_MAX);
	printf("\nshort range: <%hi,%hi>",SHRT_MIN,SHRT_MAX);
	printf("\nunsigned range: <%u,%u>",0,UINT_MAX);

	// CHAR
	int bits_char = sizeof(char)*8;
	printf("\n\nbits in char: %i",bits_char); // as ascii uses only 127 values but we can use extended ascii with 255 or others
	char basic_char = 'A', ascii_char = 65;
	printf("\nyou can also define chars by their ASCII number: %c %c",basic_char,ascii_char);

	// FLOAT - IEEE 754 Single Precision Floating Point
	// DOUBLE - IEEE 754 Double Precision Floating Point
	// LONG DOUBLE - Extended Precision Floating Point

	// floating point representation uses sign, mantissa and exponent
	// formula: (0.mantissa) * Base ^ exponent

	float pi_float = 3.14159265358979323846;
	double pi_double = 3.14159265358979323846;
	long double pi_long_double = 3.14159265358979323846;

	printf("\n\nfloat size: %i float pi: %.16f",sizeof(float),pi_float);
	printf("\ndouble size: %i double pi: %.16f",sizeof(double),pi_double);
	printf("\nlong double size: %i long double pi: %.21Lf",sizeof(long double),pi_long_double);

	int iid49 = 4/9;
	float ifd49 = 4/9;
	float ffd49 = 4.0/9.0;
	printf("\n\n%i %.3f %.3f",iid49,ifd49,ffd49);

	return 0;
}