// aaaabbbccdeea => a4b3c2de2a
#include <iostream>
#include <string>
using namespace std;

string newTask(string str){
    string newString = "";

    for(int i=0; i<str.length();i++){
        int count = 1;
        while(str[i] == str[i+1]){
            count++;
            i++;
        }
        if(count == 1)
            newString += str[i];
        else 
            newString += str[i] + to_string(count);
        count = 1;
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