#include <iostream>
using namespace std;

int max(int *arr, int n){
    int max = *arr;
    for(int i=1; i<n; i++){
        if(max < *(arr+i))
            max = *(arr+i);
    }
    return max;
}

int main(){
    int arr[6] = {1, 2, 9, 8, 7, 3};    
    cout << max(arr, 6);
    return 0;
}