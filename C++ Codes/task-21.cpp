#include <iostream>
using namespace std;

void printUnique(int arr[], int n) {
    if(n == 0) return;
    int unique = arr[0];
    cout << unique << " ";
    for(int i = 1; i < n; i++) {
        if(unique != arr[i]){
            cout << arr[i] << " ";
            unique = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, n);
    return 0;
}