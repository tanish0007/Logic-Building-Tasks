// Word Count
#include <iostream>
#include <string>
using namespace std;

int wordCount(string str){
    int count = 0;
    bool inWord = false;
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            inWord = false;
        else {
            if(!inWord){
                count++;
                inWord = true;
            }
        }
    }
    return count;
}

int main(){
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);
    
    cout << wordCount(str);

    return 0;
}