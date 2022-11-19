#include<iostream>

using std::cout;
using std::oct;
using std::hex;

int main(){
    int decimal = 30;
    int octal = 030;
    int hexadecimal = 0x30;

    cout << "decimal: " << decimal << "\n";
    cout << "octal: " << octal << "\n";
    cout << "hexadecimal: " << hexadecimal << "\n";
    cout << "decimal to oct: " << oct << decimal << "\n";
    cout << "decimal to hex: " << hex << decimal << "\n";

    return 0;
}