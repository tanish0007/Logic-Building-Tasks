#include <iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] >= 0 && arr[j+1] < 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {-1, -2, 6, 6, 4, 2, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}