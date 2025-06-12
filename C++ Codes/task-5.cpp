#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            if((i == j) || (i+j == n-1))
                cout << "*";
            else
                cout << "-";
        }
        cout << "\n";
    }
}

int main(){
    print(9);
    return 0;
}