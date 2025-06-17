// find second maximum element
#include <iostream>
using namespace std;

int secondMax(int arr[], int n) {
    int max = arr[0];
    int second_max = max;
    for(int i = 1; i < n; i++){
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if(arr[i] > second_max && arr[i] < max) {
            second_max = arr[i];
        }
    }
    return second_max;
}

int main() {
    int arr[] = {2, 1, 6, 9, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second maximum element: " << secondMax(arr, n) << endl;
    return 0;
}
