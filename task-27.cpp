// Traverse 2-D array using Pointers Approach

#include <iostream>
using namespace std;

void traverse(int *arr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << *(arr+i*(n)+j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[4][3] = {{11,32,63}, {94,25,36}, {72,80,93}, {10,11,12}};

    traverse(*arr, 4, 3);
    return 0;
}