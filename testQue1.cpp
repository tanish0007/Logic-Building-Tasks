#include <iostream>
using namespace std;

int reverse(int num){
    int rem=0, rev=0;
    while(num != 0){
        rem = num % 10;
        rev = rev*10 + rem;
        num /= 10;
    }
    return rev;
}

int main() {

    int Testcase[100];
    int n;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> Testcase[i];
    }
    cout << endl;
    for(int i=0; i<n; i++){
        if(Testcase[i] == reverse(Testcase[i]))
            cout << "Equal" << endl;
        else 
            cout << "Not Equal" << endl;
    }

    return 0;
}