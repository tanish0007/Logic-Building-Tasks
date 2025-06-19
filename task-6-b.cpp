#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        if(i == 0)
            cout << "*";
        else{
            if(i % 2 == 0){
                for(int j = 0; j <= i/2; j++){
                    cout << "*-";
                }
            }
            else {
                for(int j = 0; j <= i; j++){
                    cout << "-";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    print(7);
    return 0;
}