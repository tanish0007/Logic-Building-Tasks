// find is string a palindrome
#include <iostream>
#include <string>
using namespace std;

string reverse(string str){
    string rev = "";
    for(int i=str.length()-1; i>=0; i--){
        rev += str[i];
    }
    return rev;
}

bool isPal(string str){
    string rev = reverse(str);
    for(int i=0; i<str.length(); i++){
        if(str[i] != rev[i]){
            return false;
        }
    }
    return true;
}

int main() {

    string str;
    cout << "Enter a string: ";
    cin >> str;

    if(isPal(str))
        cout << "Yes it is palindrome";
    else
        cout << "No it is not a palindrome";
    
    return 0;
}