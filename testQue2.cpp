#include <iostream>
using namespace std;

int findMin(int a, int b, int c){
    int min = a;
    if(b<a){
        if(c<b)
            min = c;
        else 
            min = b;
    }
    return min;
}

bool areConsecutive(int a, int b, int c){
    int min = findMin(a, b, c);

    if(min == a){
        if((b == a+1 && c == a+2) || (c == a+1 && b == a+2))
            return true;
    }
    else if(min == b){
        if((a == b+1 && c == b+2) || (c == b+1 && a == b+2))
            return true;
    }
    else if(min == c){
        if((b == c+1 && a == c+2) || (a == c+1 && b == c+2))
            return true;
    }

    return false;
}

int main(){
    int Test[100][3];
    int n;
    
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin >> Test[i][j];
        }
    }

    cout << endl;
    for(int i=0; i<n; i++){
        if(areConsecutive(Test[i][0], Test[i][1], Test[i][2]))
            cout << "1" << endl;
        else 
            cout << "0" << endl;
    }

    return 0;
}