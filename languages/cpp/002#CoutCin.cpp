#include<iostream>

int main() {
    int a;// declaration
    a = 0;// initialization
    a = 2 + 1;
    int b = 7;
    a = b;
    std::cout << "a = " << a << std::endl;
    // printf from c also works here
    printf("a = %i\n",a);
    return 0;
}