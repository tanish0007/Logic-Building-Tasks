#include <iostream>
using namespace std;

int countUnique(int arr[], int n){
    if (n == 0) return 0;
    int count = 1;
    int unique = arr[0];
    for(int i = 1; i < n; i++){
        if(unique != arr[i]){
            unique = arr[i];
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of unique elements: " << countUnique(arr, n) << endl;
}