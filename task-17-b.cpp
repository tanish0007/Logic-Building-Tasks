#include <iostream>
using namespace std;

int countDigits(int num){
    if(num < 10) return 1;
    return 1 + countDigits(num/10);
}

int power(int base, int exp) {
    if(exp == 0) return 1;
    return base * power(base, exp - 1);
}

int reverse(int num){
    if(num < 10)
        return num;
    else{
        return ((num % 10) * power(10, countDigits(num) - 1)) + reverse(num / 10);
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of digits are: " << countDigits(num) << endl;
    cout << "The reversed number is: " << reverse(num) << endl;
    return 0;
}