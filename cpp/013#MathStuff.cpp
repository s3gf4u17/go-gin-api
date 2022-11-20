#include"013#MathStuff.h"

double area(double a){
    return a * a;
}

double area(double a, double b){
    return a * b;
}

int exp(int a, int x){
    if(x<=0) return 1;
    int ans = 1;
    for (int i = 0; i < x; i++){
        ans = ans * a;
    }
    return ans;
}