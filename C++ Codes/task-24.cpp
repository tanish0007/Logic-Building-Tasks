// merge two sorted arrays
#include <iostream>
using namespace std;

int* mergeArray(int arr1[], int n1, int arr2[], int n2) {
    int* merged = new int[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    return merged;
}

int main() {
    int arr1[] = {1, 2, 8, 8, 9};
    int arr2[] = {2, 3, 4, 5, 6, 7};
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