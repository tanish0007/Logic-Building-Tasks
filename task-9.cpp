#include <iostream>
using namespace std;

void printarray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = i*10;
    }
}

int main() {
    int arr[10];
    printarray(arr, 10);
    
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}