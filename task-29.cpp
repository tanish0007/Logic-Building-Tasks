// find occurence of a character
#include <iostream>
#include <string>
using namespace std;

int findOccurence (string str, char ch){
    int occurence = 0;
    for(int i=0; i < str.length() ; i++){
        if(str[i] == ch)
            occurence++;
    }
    return occurence;
}

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter the character whose occurence you want to find: ";
    cin >> ch;

    cout << "The occurence of \""<< ch << "\" in \"" << str<< "\" is: "<<findOccurence(str, ch);
    return 0;
}