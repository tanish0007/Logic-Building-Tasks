#include <iostream>
using namespace std;

void countEven(int arr[], int size) {
    int OLD = 0;
    int NEW = 0;
    for(int i =0; i < size; i++){
        if(arr[i] % 2 == 0)
            NEW++;
        arr[i] = OLD;
        OLD = NEW;
    }
}

int main() {
    int arr[] = {2, 1, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    countEven(arr, size);
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}