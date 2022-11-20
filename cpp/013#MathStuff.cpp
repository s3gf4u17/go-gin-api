#include"013#MathStuff.h"

namespace maths{

int add(int a, int b) {return a+b;}

int subtract(int a, int b) {return a-b;}

int divide(int a, int b) {return a/b;}

int multiply(int a, int b) {return a*b;}

void swap(int &a, int&b) {
    int temp = a;
    a = b;
    b = temp;
}

}