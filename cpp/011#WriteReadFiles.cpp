#include<fstream>
#include<vector>
#include<iostream>

using std::ofstream;
using std::ifstream;
using std::string;
using std::vector;
using std::cout;

int main(){
    // ofstream outputFile;
    // outputFile.open("hello.txt");

    // output to file
    ofstream file1 ("hello.txt"); // add std::ios::app to append instead of replacing the contents of the file
    if(!file1.is_open()) return -1;
    vector<string> names = {"Joe","John","Bob","Bobbinson"};
    for (string name : names) file1 << name << "\n";
    file1.close();

    // read strings from file (char streams splitted with whitespace)
    ifstream file2 ("hello.txt");
    vector<string> inputs;
    string input;
    while(file2 >> input) inputs.push_back(input);
    for (string i : inputs) cout << i << "\n";
    file2.close();

    // read file char by char
    ifstream file3 ("hello.txt");
    vector<char> chs;
    char ch;
    while(file3 >> ch) chs.push_back(ch);
    for (char i : chs) cout << i << " ";
    file3.close();
    cout << "\n";

    ifstream file4 ("hello.txt");
    char ch1 = file4.get();
    cout << ch1 << "\n";
    string line;
    getline(file4,line);
    cout << line << "\n";

    ifstream file5 ("notExistingFile.ps1");
    if(!file5.is_open()) return -1;

    cout << "this will not be printed out in the console";

    return 0;
}