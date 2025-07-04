#include <iostream>
#include <string>
using namespace std;

bool isPal(string str) {
    int start = 0;
    int end = str.length()-1;

    while(start < end){
        if(str[start] != str[end])
            return false;
        start++;
        end--;
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