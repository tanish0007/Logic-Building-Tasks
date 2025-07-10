/**
 * Write a program to find whether a given number (say x) is a “perfect number” or not.
 * A perfect number is a positive integer that is equal to the sum of its proper positive divisors.
 * For example, let the number is 6.
 * Proper positive divisors of 6 is 1,2,3 and their sum is 1+2+3=6. So, 6 is a perfect number.
 */

#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num){
    int res = 0;
    for(int i=1; i <= (num/2)+1; i++){
        if(num % i == 0){
            res += i;
        }
    }
    if(res == num) return true;
    else return false;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num); 
    
    if(isPerfect(num)) printf("Yes");
    else printf("No");
    return 0;
}