#include <iostream>
#include <string>
using namespace std;

void printVowel(string name){
    int count = 0;

    for(int i=0; i < name.length() ; i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
           name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U'){
            cout << name[i] << " ";
            count++;
        }
    }
    if(count == 0){
        cout << "No vowels found in the string." << endl;
    } else {
        cout << "\nTotal number of vowels: " << count << endl;
    }
}

int main(){
    string name = "John Doe";

    printVowel(name);
    return 0;
}