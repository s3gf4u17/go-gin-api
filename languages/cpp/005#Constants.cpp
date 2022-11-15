#include<iostream>

using std::cout;

#define C 10

enum {D = 12};

int main(){
    const int A = 5;
    cout << "A=" << A << " and cannot be changed\n";

    // this results in an error because const variables need to be initialized
    // const int B;
    // B = 12;

    cout << "C=" << C << " and cannot be changed\n";
    cout << "A*C=" << A*C << "\n";

    cout << "D=" << D << " and cannot be changed\n";

    return 0;
}