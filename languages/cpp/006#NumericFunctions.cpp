#include<iostream>
#include<cmath>

using std::cout;
using std::endl;

int main(){
    cout << sqrt(-1) << endl;
    cout << pow(9,999) << endl;
    
    cout << NAN << endl;
    cout << INFINITY << endl;
    cout << -NAN << endl;
    cout << -INFINITY << endl;

    // error: wrong data types
    // cout << 10.0%3.25 << endl;
    cout << remainder(10,3.25) << endl;
    cout << fmod(10,3.25) << endl;

    cout << fmax(10,20) << endl;
    cout << fmax(0,0.1) << endl;
    cout << fmin(10,20) << endl;
    cout << fmin(0,0.1) << endl;

    cout << ceil(12.01) << endl;
    cout << floor(12.99) << endl;
    cout << trunc(12.99) << endl;
    cout << floor(-1.5) << endl;
    cout << trunc(-1.5) << endl;
    cout << round(-1.49) << endl;
    cout << round(1.5) << endl;

    return 0;
}