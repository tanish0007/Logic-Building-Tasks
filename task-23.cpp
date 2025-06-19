// merge two arrays
#include <iostream>
using namespace std;

//  return merged array
int* mergeArray(int arr1[], int n1, int arr2[], int n2) {
    if(n1 == 0) return arr2;
    if(n2 == 0) return arr1;

    int n3 = n1 + n2;
    int* merged = new int[n3];

    for(int i = 0; i < n1; i++) 
        merged[i] = arr1[i];
    for(int i = 0; i < n2; i++)
        merged[i + n1] = arr2[i]; 
    return merged;
}

int main() {
    int arr1[] = {2, 3, 8, 11, 1, 2, 4};
    int arr2[] = {2, 6, 8, 2, 1, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int* merged = mergeArray(arr1, n1, arr2, n2);

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    delete[] merged;
    return 0;
}