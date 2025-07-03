// aaaabbbccdeea => a4b3c2de2a

#include <iostream>
#include <string>
using namespace std;

string newTask(string str){
    string newString = "";
    int charArr[256] = {0};

    for(int i=0; i<str.length(); i++){
        charArr[str[i]] = 1;

        while(str[i] == str[i+1]){
            i++;
            charArr[str[i]]++;
        }

        if(charArr[str[i]] == 1)
            newString += str[i];
        else
            newString += str[i] + to_string(charArr[str[i]]);
        charArr[str[i]] = 0;
    }
    return newString;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << newTask(str);
    return 0;
}