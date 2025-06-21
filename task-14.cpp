#include <iostream>
using namespace std;

int reverse(int num) {
    int rev = 0;
    int rem = 0;

    while( num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The reversed number is: " << reverse(num) << endl;
    return 0;
}