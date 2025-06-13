#include <iostream>
using namespace std;

// void print(int n){
//     for(int i =0; i<n; i++){
//         int space = i;
//         for(int j=0; j < 2*n - i - 1; j++){
//             if(space){
//                 cout << "  ";
//                 space = space - 1;
//             }
//             else 
//                 cout << "* ";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i <= n; i++){
//         int space = i;
//         // for(int j = 2*n - i - 1; j > 0; j--){
//         for(int j=0; j < 2*n - i-1; j++){
//             if(space){
//                 cout << "  ";
//                 space = space - 1;
//             }
//             else 
//                 cout << "* ";
//         }
//         cout << endl;
//     }
// }

void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++)
            cout << "  ";
        for(int j = 0; j < 2*(n-i)-1; j++)
            cout << "* ";
        cout << endl;
    }

    for(int i=2; i <= n; i++){
        for(int j = 0; j < n-i; j++)
            cout << "  ";
        for(int j = 0; j < 2*i-1; j++)
            cout << "* ";
        cout << endl;
    }
}

int main() {
    int n = 5;
    print(n/2+1);

    return 0;
}