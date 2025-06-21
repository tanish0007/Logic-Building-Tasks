#include <iostream>
using namespace std;

void sort(int arr[], int size){
    int c1, c2, c3;
    c1 = c2 = c3 = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 1){
            c1++;
        } else if(arr[i] == 2){
            c2++;
        } else if(arr[i] == 3){
            c3++;
        }
    }
    for(int i = 0; i < c1; i++){
        arr[i] = 1;
    }
    for(int i = c1; i < c1 + c2; i++){
        arr[i] = 2;
    }
    for(int i = c1 + c2; i < size; i++){
        arr[i] = 3;
    }
}

int main(){
    int arr[] = {3, 1, 2, 1, 3, 2, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}