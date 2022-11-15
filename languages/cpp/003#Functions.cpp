#include<iostream>
#include<cmath>

void multiply(int,int); // function declaration
// declarations in header files, definition in code

double power(double,int);

int main(){
    multiply(7,9);
    int base = 4,exponent = 3;
    std::cout << pow(base,exponent) << "\n";
    double power_result1 = pow(base,exponent);
    double power_result2 = power(base,exponent);
    std::cout << power_result1 << " " << power_result2 << "\n";
    return 0;
}

// function definition
void multiply(int x, int y){
    std::cout << "multiplied value = " << x * y << "\n";
}

double power(double base, int exponent){
    double result=1;
    for (int i = 0; i < exponent;i++) result *= base;
    return result;
}