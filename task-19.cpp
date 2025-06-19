#include <iostream>
using namespace std;

void computeSum(int num, int &evenSum, int &oddSum){
    if(num == 0) return;
    else{
        if((num % 10) % 2 == 0)
            evenSum += num % 10;
        else 
            oddSum += num % 10;
        computeSum(num / 10, evenSum, oddSum);
    }
}

int addEvenOdd(int num){
    int evenSum = 0, oddSum = 0;
    computeSum(num, evenSum, oddSum);    
    return (evenSum >= oddSum) ? evenSum : oddSum;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = addEvenOdd(num);
    cout << "The result is: " << result << endl;
    return 0;
}