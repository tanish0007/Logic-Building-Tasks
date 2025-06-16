#include <iostream>
using namespace std;

int addEvenOdd(int num){
    int evenSum = 0, oddSum = 0;
    int rem;

    while(num != 0){
        rem = num % 10;
        if(rem % 2 == 0)
            evenSum += rem;
        else
            oddSum += rem;
        num /= 10;
    }

    if(evenSum >= oddSum)
        return evenSum;
    else 
        return oddSum;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = addEvenOdd(num);
    cout << "The result is: " << result << endl;
    return 0;
}