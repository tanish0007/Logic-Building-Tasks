// create a pattern like hour glass having odd number of stars in each row
#include <iostream>
using namespace std;

// Diamond
// void print(int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++) {
//             if(i + j < n / 2 || i + j >= n + n / 2 || j - i > n / 2 || i - j > n / 2) {
//                 cout << " ";
//             } else {
//                 cout << "*";
//             }
//         }
//         cout << "\n";
//     }
// }

// Hour Glass Like Pattern              run nicely.. but ykyk
// void print(int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++) {
//             if((i+j == n-1) || ((i == j)) || (i == 0) || (i == n-1) || (i+j == n/2 +1 && i < j) || (i+j == n && i>j)) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }
// }

void print(int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(((j == 0) || (j == n-1) || (j == 3 && i+j == n) || (j == 1 && i+j == n-2)) && !(i == j) && !(i == n-1 && j == 0) && !(i == 0 && j == n-1)) 
                cout << " ";
            else 
                cout << "*";
        }
        cout << "\n";
    }
}

int main(){
    print(5);
    return 0;
}