// rev words order
#include <iostream>
#include <string>
using namespace std;

void reverse(string &str, int start, int end){
    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

void revWordsString(string &str){
    int j=0, k=0;
    for(int i=0; i<str.length(); ){
        if(!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')){
            k=i;
        }
        else{
            reverse(str, j, k);
            while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
                i++;
            }
            j = k = i;
        }
        if(i == str.length()-1){
            reverse(str, j, k);
            j = k = i+1;
        }
        i++;
    }
    cout << str;
}

string reverse(string &str){
    string rev = "";
    for(int i=str.length()-1; i>=0; i--){
        rev += str[i];
    }
    return rev;
}

void revWordsOrder(string &str) {
    string newString = reverse(str);
    revWordsString(newString);
}

int main() {
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);
    revWordsOrder(str);

    return 0;
}