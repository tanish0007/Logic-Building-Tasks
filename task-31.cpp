// find if two strings are anagram

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

int isIncludes(char ch, string str){
    for(int i=0; i<str.length(); i++){
        if(str[i] == ch)
            return i;
    }
    return -1;
}

bool isAnnagram (string str1, string str2){
    if(str1.length() != str2.length())
        return false;

    for(int i=0; i<str1.length(); i++){
        int pos = isIncludes(str1[i], str2);
        if(pos == -1)
            return false;
        if(findOccurence(str1, str1[i]) != findOccurence(str2, str2[pos]))
            return false;
    }
    return true;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if(isAnnagram(str1,str2))
        cout << "Yes Annagram";
    else 
        cout << "No it is not annagram";
    return 0;
}