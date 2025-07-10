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

int main(){
    int num;
    cin >> num;
    
    int i=2;
    while(i <= num){
        if(isPrime(i))  cout << i << endl;
        i++;
    }

    return 0;
}