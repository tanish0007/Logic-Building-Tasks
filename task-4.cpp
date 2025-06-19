#include <iostream>
// #include <string>
using namespace std;

int MAX=5;

// void printStar(int n){
//     for(int i = 0; i < n; i++){
//         for(int j = i; j < n; j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }

int max(int n[]){
    int max = n[0];
    for(int i = 1; i < MAX; i++){
        if(n[i] > max){
            max = n[i];
        }
    }
    return max;
}

void printStar(int n[]){
    int columns = MAX;
    int rows = max(n);
    int max = rows;
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(n[j] >= max){
                cout << "|*|";
            } else {
                cout << "| |";
            }
        }
        max = max - 1;
        cout << "\n";
    }
}

int main(){
    int n[MAX] = {1, 3, 5, 6, 2};
    printStar(n);
    return 0;
}