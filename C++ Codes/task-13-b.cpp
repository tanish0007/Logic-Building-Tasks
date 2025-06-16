#include <iostream>
using namespace std;

void arrange(int arr[], int n){
    int left = 0, right = n-1;

    while(left < right) {
        while(left < right && arr[left] < 0) {
            left++;
        }
        while(left < right && arr[right] >= 0){
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
    int arr[] = {-1, -2, 6, 6, 4, 2, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    arrange(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}