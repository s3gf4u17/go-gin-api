// header file -> needs to be included in implementation and main files
// at the start of the header file -> #ifndef NAME <- preprocessor directive
// after that contents of header file can be placed between #define NAME and #endif
// implementation file
// main file
#include<iostream>
#include"013#MathStuff.h"

using std::cout;

int main(){
    cout << area(1.0) << "\n";
    cout << area(2.0,3.0) << "\n";
    cout << exp(2,3) << "\n";
    cout << exp(2,0) << "\n";
    cout << exp(2,-1) << "\n";
    return 0;
}

// this program can be compiled with following command:
// g++ 013#MultipleFiles.cpp 013#MathStuff.cpp