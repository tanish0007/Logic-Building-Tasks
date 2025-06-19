#include <iostream>
using namespace std;

int addOdd(int num){
    if(num == 0) return 0;
    else{
        if((num % 10) % 2 != 0)
            return addOdd(num / 10) + num % 10;
        else 
            return addOdd(num / 10);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The sum of odd digits is: " << addOdd(num) << endl;
    return 0;
}