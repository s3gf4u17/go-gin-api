#include<iostream>

using std::cout;
using std::string;

struct User{
    private:
        int test_score = 0;
    public:
        string name;
        string surname;
        int age;
        void setScore(int s){test_score=s;}
        int getScore(){return test_score;}
};

int main(){
    User user1;
    user1.name = "Szymon";
    user1.surname = "Kolakowski";
    user1.age = 20;

    user1.setScore(17);

    cout << user1.name << " " << user1.surname << " " << user1.age << " " << user1.getScore() << "\n";

    return 0;
}