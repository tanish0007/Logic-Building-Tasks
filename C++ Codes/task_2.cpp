#include <iostream>
#include <string>
using namespace std;

int discount (int age) {
    // int group = (age > 9) + (age > 20) + (age > 60);
    // switch(group) {
    //     case 0: return 90;
    //     case 1: return 30;
    //     case 2: return 0;
    //     case 3: return 90;
    // }
    if(age <= 9){
        return 90;
    }
    else if(age >=10 && age <= 20)
        return 30;
    else if(age >= 21 && age <= 59)
        return 0;
    else if(age >= 61)
        return 90;
    else
        return null;
}

int calculateTrainFair(int age, string trainClass, int distance) {
    float discountRate = discount(age);

    // switch(trainClass){
        if(trainClass == "SL") {
            return ( (1 * distance) - ((1 * distance) * (discountRate / 100) ));
        }
        if(trainClass == "FC"){
            return ( (2 * distance) - ((2 * distance) * (discountRate / 100) ));
        }
        if(trainClass == "SC"){
            return ( (3 * distance) - ((3 * distance) * (discountRate / 100) ));
        }
    // }
}

int main() {
    int age, distance;
    string trainClass;
    
    cout << "Enter your age: ";
    cin >> age;

    if(age <= 0 || age >= 100) {
        cout << "Invalid age entered. Please enter an age from (0 to 100)" << endl;
        return 1;
    }

    cout << "Enter the train Class SL(Sleeper), FC(First Class), SC(Second Class): ";
    cin >> trainClass;

    if(trainClass != "SL" && trainClass != "FC" && trainClass != "SC") {
        cout << "Invalid train class entered. Please enter SL, FC, or SC." << endl;
        return 1;
    }

    cout << "Enter the distance in km: ";
    cin >> distance;
    cout << "Your train fair would be: "<< calculateTrainFair(age, trainClass, distance) << endl;
    return 0;
}