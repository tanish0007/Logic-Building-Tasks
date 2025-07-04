#include <iostream>
#include <string>
using namespace std;

void countFrequency(string str) {
    string newString = "";
    int charArr[256] = {0};

    for(int i=0; i<str.length(); i++){
        charArr[str[i]]++;
    }
    for(int i=0; i<str.length(); i++){
        if(charArr[str[i]] != -1){
            newString += str[i] + to_string(charArr[str[i]]) + " ";
            charArr[str[i]] = -1;
        }
    }
    cout << newString;
}

int main() {
    string str;
    cin >> str;
    countFrequency(str);

    return 0;
}