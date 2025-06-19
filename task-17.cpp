#include <iostream>
#include <cmath>
using namespace std;

int reverse(int num){
    static int rev = 0;

    if(num == 0){
        int result = rev;
        rev = 0;
        return result;
    }

    rev = rev * 10 + num % 10;
    return reverse(num / 10);
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The reversed number is: " << reverse(num) << endl;
    return 0;
}