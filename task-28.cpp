#include <iostream>
#include <string>
using namespace std;

string reverse(string str){
    string rev = "";
    // int n = str.length();

    for(int i=str.length()-1; i>=0; i--){
        rev += str[i];
    }
    return rev;
}

int main(){
    cout << reverse("Tanish Jangra");
    return 0;
}