#include<iostream>

using std::cout;

template<typename T> void swap(T &a, T&b){
    T temp = a;
    a = b;
    b = temp;
    cout << "a:" << a << " b:" << b << "\n";
}

// overloading template for arr
template<typename T> void swap(T *a, T *b, int size){
    for (int i = 0; i< size; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

template<typename T> void print_arr(T *a, int size){
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main(){
    char ch1 = 'a'; char ch2 = 'b';
    int int1 = 1; int int2 = 2;
    double double1 = 1.0; double double2 = 2.0;
    bool bool1 = true; bool bool2 = false;

    swap(ch1,ch2);
    swap(int1,int2);
    swap(double1,double2);
    swap(bool1,bool2);

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};
    print_arr(arr1,5);
    swap(arr1,arr2,5);
    print_arr(arr1,5);

    char arr3[] = {61,62,63,64,65};
    char arr4[] = {65,64,63,62,61};
    print_arr(arr3,5);
    swap(arr3,arr4,5);
    print_arr(arr3,5);

    return 0;
}