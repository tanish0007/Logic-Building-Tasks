#include <iostream>
using namespace std;

bool isPrime(int num){
    int count = 0;

    for(int i=1; i<=num; i++){
        if(num%i == 0) count++;
    }
    if(count > 2)   return false;
    else    return true;
}

void primeFactors(int n){
    for(int i=2; i <= n; i++){
        while(n % i == 0 && isPrime(i)){
            cout << i << endl;
            n = n / i;
        }
    }
}

int main(){
    primeFactors(24);
    return 0;
}