#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary){
    int num = 0;
    int j = 0;
    for(int i = binary.length()-1; i >= 0; i--){
        int x = binary[i] - '0';
        num += x * pow(2, j);
        j++;
    }
    return num;
}

int main() {
    cout << binaryToDecimal("1000");
    return 0;
}