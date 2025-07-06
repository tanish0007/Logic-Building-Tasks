// decompress a string
#include <iostream>
#include <string>
using namespace std;

string deCompress(string str){
    string newString = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            int n = str[i] - '0';
            for(int j=0; j<n-1; j++)
                newString += str[i-1];
        }
        else {
            newString += str[i];
        }
    }
    return newString;
}

int main(){
    string str;
    cout << "Enter string: ";
    cin >> str;

    cout << deCompress(str);
    return 0;
}