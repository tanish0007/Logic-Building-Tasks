// is string anagram or not
#include <iostream>
#include <string>
using namespace std;

bool isAnagram (string str1, string str2) {
    if(str1.length() != str2.length())
        return false;

    int charArr1[256] = {0};
    int charArr2[256] = {0};

    for(int i=0; i<str1.length(); i++)
        charArr1[str1[i]]++;

    for(int i=0; i<str2.length(); i++)
        charArr2[str2[i]]++;
    
    for(int i=0; i<256; i++){
        if(charArr1[i] != charArr2[i])
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

    if(isAnagram(str1,str2))
        cout << "Yes Annagram";
    else 
        cout << "No it is not annagram";
    return 0;
}