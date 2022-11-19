#include<iostream>
#include<vector>
#include<array>

using std::cout;
using std::vector;
using std::array;

// & reference - does not copy the variable, we can change the original
// c style arrays are passed with pointers (you can modify it by default)

void print_array(int* arr,int size){
    for(int i = 0; i < size;i++) cout << arr[i] << "\t";
    cout << "\n";
}

void print_vector(vector<int> &vec,int size){
    for(int i = 0;i < size;i++) cout << vec[i] << "\t";
    cout << "\n";
}

void print_arraySTL(array<int,128> &vec, int size){
    for(int i = 0;i < size;i++) cout << vec[i] << "\t";
    cout << "\n";
}

int main(){
    int monthsArr[] = {1,2,3,4,5,6,7,8,9,10,11,12}; // auto detects size of 12
    print_array(monthsArr,(sizeof(monthsArr)/sizeof(int)));

    vector<int> monthsVec = {1,2,3,4,5,6,7,8,9,10,11,12};
    monthsVec.push_back(13);
    monthsVec.pop_back();
    print_vector(monthsVec,monthsVec.size());

    // stl array - standard template library
    array<int,128> monthsArrSTL = {1,2,3,4,5,6,7,8,9,10,11,12};
    print_arraySTL(monthsArrSTL,12);

    vector<int> monthsVecCopy = monthsVec;

    for(int i = 0;i<monthsVecCopy.size();i++) cout << monthsVecCopy[i] <<  "\t";
    cout << "\n";

    for(int n : monthsVecCopy) cout << n << "\t";
    cout << "\n";
    
    return 0;
}