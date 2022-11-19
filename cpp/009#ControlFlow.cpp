#include<iostream>
#include<stdbool.h>

using std::cout;

int main(){
    if(0) cout << "test #0\n";
    if(1) cout << "test #1\n";

    int age = 10;
    if(age>18) cout << "test #2\n";
    else if(age<10) cout << "test #3\n";
    else cout << "test #4\n";

    enum class Season{summer,spring,fall,winter};
    Season now = Season::winter;
    switch (now)
    {
        case Season::spring:
            cout << "test #5\n";
            break;
        
        default:
            cout << "test #6\n";
            break;
    }

    for(int i = 0; i < 1; i++) cout << "test #7\n";
    for(int i = 1; i < 1; i++) cout << "test #8\n";
    for(int i = 1; i > 0; i--) cout << "test #9\n";

    int a = 0;
    while (a<1){
        cout << "test #10\n";
        a++;
    }
    // a already equals 1 here
    do{
        cout << "test #11\n";
        a++;
    } while (a<1);

    int b = 0;
    while (true){
        if (b==0) break;
        cout << "test #12\n";
    }

    int c = 0;
    while (true){
        if (c==0) {
            cout << "test #13\n";
            c++;
            continue;
        }
        cout << "test #14\n";
        break;
    }

    int d = true ? 15 : 0;
    cout << "test #" << d << "\n";

    return 0;
}