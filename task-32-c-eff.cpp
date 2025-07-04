#include <iostream>
#include <string>
using namespace std;

string newTask(string str){
    int count = 1;
    for(int i=0; i<str.length(); i++){
        while(str[i] == str[i+1]){
            count++;
            i++;
        }
        if(count != 1){
            cout << count;
            cout << " "<< i << " ";
            cout << " "<< str.length() - i<< " " <<endl;
        }
        else{
            cout << "hehe";
        }
        count =1;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << newTask(str);
    return 0;
}