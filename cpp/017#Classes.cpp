#include<iostream>
#include<ostream>

// encapsulation - you dont have to expose all class to the outer world
// you can keep some stuff private, and it will have effect on class
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

        // getter
        int get_score() const {
            return this->test_score;
        }

        // setter
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

class BankAccount{
    int savings=0;
    static int BankAccountsCount;
    public:
        std::string ownerId;
        // constructors and destructor
        BankAccount(){}
        BankAccount(std::string ownerId,int savings){
            this->ownerId = ownerId;
            this->savings = savings;
            BankAccountsCount++;
        }
        ~BankAccount(){
            BankAccountsCount--;
            std::cout << "account has been removed\n";
        }
        // getters
        int getSavings() const {return this->savings;}
        static int getCount(){return BankAccountsCount;}
        // setters
        void transfer(int x, BankAccount* y) {
            y->savings+=x;
            this->savings-=x;
            std::cout << "TRANSFER " << this->ownerId << " --> " << y->ownerId << " [" << x << "]\n";
        }
        // operators overload
        bool operator == (BankAccount* right) const {
            if (this->savings == right->savings) return true;
            return false;
        }

        friend void output(BankAccount* ba){};
};

// we can get access to private data members here
void output(BankAccount* ba){std::cout << ba->savings;}
// it is not a member function though
// we call it directly like
// output(&bank_account);
 
int BankAccount::BankAccountsCount = 0;

std::ostream& operator << (std::ostream& output, BankAccount* ba){
    output << ba->ownerId <<":["<< ba->getSavings() <<"]\n";
    return output;
}

std::istream& operator >> (std::istream& input, BankAccount* ba){
    input >> ba->ownerId;
    return input;
}

int main(){
    // User user ("szymon","kolakowski",20);
    // // can also be done using
    // // User* user = new User(...);
    // user.print_user();
    // user.set_score(12);
    // user.name = "tymon";
    // user.print_user();
    // User user2 ("tymon","kolakowski",20);

    BankAccount ba1("ni20vs879",0);
    BankAccount ba2("s72nc8w72",10);
    std::cout << "[ " << BankAccount::getCount() << " accounts found in system ]\n";
    std::cout << ba1.ownerId << ": " << ba1.getSavings() << "\t" << ba2.ownerId << ": " << ba2.getSavings() << "\n";
    ba1.transfer(10,&ba2);
    std::cout << ba1.ownerId << ": " << ba1.getSavings() << "\t" << ba2.ownerId << ": " << ba2.getSavings() << "\n";
    ba2.transfer(15,&ba1);
    std::cout << ba1.ownerId << ": " << ba1.getSavings() << "\t" << ba2.ownerId << ": " << ba2.getSavings() << "\n";

    ba1 == &ba2 ? std::cout << "equal\n" : std::cout << "not equal\n";
    // BankAccount merged = ba1 + ba2;

    ba2.~BankAccount();
    std::cout << "[ " << BankAccount::getCount() << " accounts found in system ]\n";
    std::cout << "set owner id ";
    std::cin >> &ba1;
    std::cout << &ba1;
    return 0;
}