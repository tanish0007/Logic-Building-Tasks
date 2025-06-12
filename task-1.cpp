#include <iostream>
using namespace std;

// int ticket(int age){
//     if(age <= 12) 
//         return 100;
//     else if((age >= 13 && age <= 17))
//         return 150;
//     else if((age >= 18 && age <= 59))
//         return 250;
//     else if((age >= 60))
//         return 120;
// }


// int ticket_switch(int age) {
//     switch (age){
//         case 5 ... 12: 
//             return 100;
//         case 13 ... 17: 
//             return 150;
//         case 18 ... 59: 
//             return 250;
//         case 60 ... 100: 
//             return 120;
//     }
// }

int ticket_switch(int age) {
    int group = (age > 12) + (age > 17) + (age > 59);

    switch(group){
        case 0: return 100;
        case 1: return 150;
        case 2: return 250;
        case 3: return 120;
        default: return 0;
    }
}


int main(){
    int age;
    Reinput:cout << "Enter your age: ";
    cin >> age;

    if(age <= 5 || age > 100){
        cout << "Invalid age entered. Please enter a age from (0 to 100)"<< endl;
        goto Reinput;
    }
    cout << "Your age is: "<< age;
    cout << "\nTicket price is: " << ticket_switch(age) ;

    return 0;
}