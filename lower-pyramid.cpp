#include <iostream>
using namespace std;

void print(int n){
    for(int i =0; i<n; i++){
        int space = i;
        for(int j=0; j < 2*n - i - 1; j++){
            if(space){
                cout << "  ";
                space = space - 1;
            }
            else 
                cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    print(n);
    return 0;
}