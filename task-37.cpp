// rev words order
#include <iostream>
#include <string>
using namespace std;

void revWordsOrder(string &str) {
    string newString = "";
    for(int i = 0; i<str.length(); i++){
        if(!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')){
            
        }
    }
}

int main() {
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);

    revWordsOrder(str);
    cout << str;

    return 0;
}