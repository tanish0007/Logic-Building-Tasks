#include <iostream>
using namespace std;

void arrange(int arr[], int n){
    int left = 0, right = n-1;

    while(left < right) {
        while(left < right && arr[left] == 1) {
            left++;
        }
        while(left < right && arr[right] == 0){
            right--;
        }
        if(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int arr[] = {1, 0, 1, 0, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    arrange(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}