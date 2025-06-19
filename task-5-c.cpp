#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        // for(int j = 0; j < i; j++)
        //     cout << "  ";
        // for(int j = 0; j < 2*(n-i)-1; j++)
        //     cout << "* ";
        // cout << endl;

        // Combination of both loops
        for(int j=0; j < 2*n - i - 1; j++){
            if(j < i)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;   
    }

    for(int i=2; i <= n; i++){
        // for(int j = 0; j < n-i; j++)
        //     cout << "  ";
        // for(int j = 0; j < 2*i-1; j++)
        //     cout << "* ";
        // cout << endl;

        // Combination of both loops
        for(int j = 0; j < n + i - 1; j++){
            if(j < n-i)
                cout << "  ";
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