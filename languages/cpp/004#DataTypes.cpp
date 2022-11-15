#include<iostream>
#include<limits.h>
#include<float.h>

int main() {
    short a = 0;
    int b = 0;
    long c = 0;
    long long d = 0;
    // only positive values
    unsigned short aa = 0;
    unsigned int bb = 0;
    unsigned long cc = 0;
    unsigned long long dd = 0;

    std::cout << "short size: " << sizeof(short)*8 << " bits\n";
    std::cout << "int size: " << sizeof(int)*8 << " bits\n";
    std::cout << "long size: " << sizeof(long)*8 << " bits\n";
    std::cout << "long long size: " << sizeof(long long)*8 << " bits\n";

    std::cout << "short max: " << SHRT_MAX << "\n";
    std::cout << "int max: " << INT_MAX << "\n";
    std::cout << "long max: " << LONG_MAX << "\n";
    std::cout << "short max: " << LONG_LONG_MAX << "\n";

    // ascii table values
    signed char e = 'a'; // error if e < 0
    std::cout << e << " " << (int) e << "\n";
    unsigned char f = 65; // f cant be negative
    std::cout << f << " " << (int) f << "\n";
    // \0 - escape sequence terminating c style string

    bool its_true = true; // any value except 0
    bool its_false = false; // 0

    // bool alpha makes cout of a bool [true,false] instead of [1,0]
    std::cout << std::boolalpha << its_true << " " << its_false << "\n";

    float g = 10.0/3.0;
    double h = 7.7E4;
    long double i = 10.0/3.0;
    // fixed to avoid scientific notation
    std::cout << std::fixed << g << " " << h << " " << i << "\n";
    std::cout << FLT_DIG << "\n"; // we can trust float to FLT_DIG values
    std::cout << DBL_DIG << "\n"; // we can trust double to DBL_DIG values

    return 0;
}