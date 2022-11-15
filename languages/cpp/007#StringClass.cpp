#include<iostream>
#include<string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    // string greeting = "Hello";
    // cout << greeting << "\n";
    // cout << greeting[0] << "\n";
    // string empty; // initializes as ""
    // cout << empty << "\n";
    // empty += "!";
    // cout << empty << "\n";

    // cout << greeting.length() << "\n";
    // method == member function == functions attached to objects

    // char cstring[] = "Simon"; // c string is just an array of characters
    // is not a class so it cant be rededefined, nor does it have a length method

    // string input;
    // cout << "input: ";
    // cin >> input; // gets all the characters to the first whitespace
    // cout << input << endl;

    // string name,surname;
    // cout << "name: "; // after space will start reading surname
    // cin >> name;
    // cout << "surname: ";
    // cin >> surname;
    // cout << "name: " << name << " surname: " << surname << endl;

    // string userdata;
    // cin.ignore();
    // getline(cin,userdata); // for strings
    // cin.getline() - for numbers etc
    // cout << userdata << endl;

    string modifiers = "modifiers";
    cout << modifiers.length() << endl;
    modifiers.append("!");
    modifiers.insert(0,"XYZ");
    cout << modifiers.size() << endl;
    cout << modifiers << endl;
    modifiers.erase(0,2);
    // modifiers.erase(0); - erases whole string
    cout << modifiers << endl;
    modifiers.pop_back();
    modifiers.replace(0,1,"X");
    cout << modifiers << endl;
    cout << modifiers.find("mod") << endl;
    cout << modifiers.substr(1,3) << endl;
    modifiers.append("?");
    cout << modifiers.find_first_of("?") << endl;
    modifiers.pop_back();
    if(modifiers.find_first_of("?")==-1) cout << "? NOT FOUND" << endl;
    // if(modifiers=="modifiers") cout << "modifiers variable has not been modified" << endl;
    // else cout << "modifiers variable has been modified" << endl;
    // string.compare() -> returns 0 if equal
    if(modifiers.compare("modifiers")==0) cout << "modifiers variable has not been modified" << endl;
    else cout << "modifiers variable has been modified" << endl;

    return 0;
}