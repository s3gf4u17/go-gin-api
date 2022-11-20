#include<iostream>
#include<map>

int main() {
    std::map<int,std::string> myMap;
    myMap.insert(std::pair<int,std::string>(1,"teststring"));
    myMap[12]="innametoda";

    std::cout << myMap.empty() << " " << myMap.size() << " " << myMap.max_size() << "\n";

    for(std::map<int,std::string>::iterator it = myMap.begin();it!=myMap.end();it++){
        std::cout << it->first << " -> " << it->second << "\n"; 
    }

    return 0;
}