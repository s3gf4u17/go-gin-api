// header file -> needs to be included in implementation and main files
// at the start of the header file -> #ifndef NAME <- preprocessor directive
// after that contents of header file can be placed between #define NAME and #endif
// implementation file
// main file
#include<iostream>
#include"013#MathStuff.h"

using std::cout;

int main(){
    cout << maths::add(5,7) << "\n";
    cout << maths::subtract(8,3) << "\n";
    cout << maths::divide(7,1) << "\n";
    cout << maths::multiply(3,4) << "\n";

    int a = 1;
    int b = -1;
    maths::swap(a,b);
    cout << a << " " << b << "\n";
    return 0;
}

// this program can be compiled with following command:
// g++ 013#MultipleFiles.cpp 013#MathStuff.cpp
// or
// g++ -c 013#MultipleFiles.cpp 013#MathStuff.cpp
// g++ multiplefiles.o mathstuff.o
// or with makefile

// script1.o: script1.cpp
// g++ -c script1.cpp

// script2.o: script2.cpp
// g++ -c script2.cpp

// compile: script1.o script2.o
// g++ script1.o script2.o

// clean:
// rm -rf *.o ./a.out

// makefile checks if req on the right is newer than the file
// if yes, it recompiles only changed files