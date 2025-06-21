#include <iostream>
using namespace std;

// Complete Z
// void print(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i+j == n-1 || i == n-1 || i == 0)
//                 cout << "*";
//             else 
//                 cout << " ";
//         }
//         cout << "\n";
//     }
// }

// Sir task
void print(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j == n-1 || i == n-1 || i == 0) && !(i == 0 && j ==0) && !(i == n-1 && j == n-1) )
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }
}

int main(){
    print(5);
    return 0;
}