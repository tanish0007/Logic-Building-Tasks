// we are in CQST =>
// ew rea ni TSQC

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

// void revWordsString(string &str){
//     int j=0, k=0;
//     for(int i=0; i<str.length(); ){
//         if(!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')){
//             k=i;
//         }
//         else{
//             reverse(str, j, k);
//             j = k = i+1;
//         }
//         if(i == str.length()-1){
//             reverse(str, j, k);
//             j = k = i+1;
//         }
//         i++;
//     }
// }

void revWordsString(string &str){
    int j=0, k=0;
    cout << "j: "<< j<< " k: " << k << endl;
    for(int i=0; i<str.length(); ){
        if(!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')){
            k=i;
        }
        else{
            cout << "j: "<< j<< " k: " << k << endl;
            reverse(str, j, k);
            j = k = i+1;
            cout << "j: "<< j<< " k: " << k << endl;
        }
        if(i == str.length()-1){
            cout << "j: "<< j<< " k: " << k << endl;
            reverse(str, j, k);
            j = k = i+1;
            cout << "j: "<< j<< " k: " << k << endl;
        }
        i++;
        cout << "i : "<< i << endl;
    }
}

int main(){
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);
    
    cout << "string length: "<< str.length() << endl;
    revWordsString(str);
    cout << str;
    
    return 0;
}