#include <iostream>
using namespace std;

void print(int n) {
    for(int i=0; i < n; i++){
        for(int j=0; j <= i; j++){
            // cout << "*";
            if((i % 2 == 0) && (j % 2 == 0)) {
                cout << "*";
            } else {
                cout << "-";
            }
        }
        cout << "\n";
    }
}

int main() {
    print(5);
    return 0;
}