// add unique elements in a new array
#include <iostream>
using namespace std;

int* Unique(int arr[], int n){
    if(n == 0) return nullptr;
    int* Array = new int[n];
    int count = 1;
    int unique = arr[0];
    Array[0] = unique;
    for(int i = 1; i < n; i++){
        if(unique != arr[i]){
            unique = arr[i];
            count++;
            Array[count - 1] = unique;
        }
    }
    return Array;
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int* uniqueArray = Unique(arr, n);
    
    cout << "Unique elements: ";
    for (int i = 0; i < n; i++) {
        if (uniqueArray[i] != 0) {
            cout << uniqueArray[i] << " ";
        }
    }
    cout << endl;

    delete[] uniqueArray; // Free allocated memory
    return 0;
}