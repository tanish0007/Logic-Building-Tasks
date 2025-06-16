#include <iostream>
using namespace std;

int sumOdd(int num){
    int sum = 0;
    int rem;

    while(num != 0){
        rem = num % 10;
        if(rem % 2 != 0) {
            sum += rem;
        }
        num /= 10;
    }
    return sum;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The sum of odd digits is: " << sumOdd(num) << endl;
    return 0;
}