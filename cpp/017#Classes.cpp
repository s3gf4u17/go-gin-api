#include<iostream>

class User{
    int test_score = 0;
    public:
        std::string name;
        std::string surname;
        int age;

        User(std::string name, std::string surname,int age){
            this->name = name;
            this->surname = surname;
            this->age = age;
        }

        // constructor also can be overloaded
        // User(int age){
        //     this->age = age;
        // }

        int get_score() const {
            return this->test_score;
        }

        void set_score(const int s){
            this->test_score = s;
        }

        void print_user() const {
            std::cout << "name:" << this->name;
            std::cout << "\tsurname:" << this->surname;
            std::cout << "\tage:" << this->age;
            std::cout << "\tscore:" << get_score() << "\n";
        }

        ~User(){
            std::cout << "usr has been destroyed" << "\n";
        }
};

int main(){
    User user ("szymon","kolakowski",20);
    // can also be done using
    // User* user = new User(...);
    user.print_user();
    user.set_score(12);
    user.name = "tymon";
    user.print_user();

    User user2 ("tymon","kolakowski",20);

    return 0;
}