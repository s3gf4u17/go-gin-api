#include<iostream>

using std::cout;
using std::string;

// function vs method -> method is attached to an object
// static method vs method -> static method is attached to a class
// constructor -> special function called in a process of instantiating class
// CONSTRUCTOR DOESNT HAVE A RETURN TYPE
// destructor -> called when an object is being deleted

void do_something(int* arr){}

// const here means that value of the arguments can be changed
void print_array(const int* arr, const int size){
    for(int i = 0; i < size;i++) cout << arr[i] << " ";
    cout << "\n";
    // do_something(arr); <- cannnot be used here because arr in do something is not set to const
}

void pass_by_value(int a){a++;}
void pass_by_reference(int &a){a++;} // a is an alias for the same variable

void swap_values(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

struct Rectangle{
    double width;
    double lenght;
};

int area(int a) {return a*a;}
int area(int a, int b) {return a*b;}
double area(Rectangle a){return a.lenght*a.width;}

// function overloading
void print(const int a) { cout << "int: " << a << "\n"; }
// return type is not a part determining if a function is unique
// int print(int a) { cout << "int: " << a << "\n"; return 0;}
void print(const double a) { cout << "double: " << a << "\n"; }
void print(const string a) { cout << "string: " << a << "\n"; }
void print(const char a) { cout << "char: " << a << "\n"; }

void default_arguments(int a = 0) { cout << a << "\n"; }

int main(){
    int arr1[] = {1,2,3,4};
    print_array(arr1,sizeof(arr1)/sizeof(int));

    int a = 10;
    pass_by_value(a);
    cout << a << "\n";

    pass_by_reference(a);
    cout << a << "\n";

    // arrays are always passed by pointers
    // everything else is being passed by value

    int x = 10;
    int y = 0;
    cout << "x " << x << "\ty " << y << "\n";
    swap_values(x,y);
    cout << "x " << x << "\ty " << y << "\n";

    print(1);
    print(1.0);
    string arg1 = "1";
    print(arg1);
    print('1');

    Rectangle rect; rect.lenght = 2.0; rect.width = 3.0;
    cout << area(2) << " " << area(2,3) << " " << area(rect) << "\n" ;

    default_arguments();
    default_arguments(10);

    return 0;
}