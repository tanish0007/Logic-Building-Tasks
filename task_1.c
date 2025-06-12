#include <stdio.h>

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

    Reinput : printf("Enter your age: ");

    if(scanf("%d", &age) != 1) {
        printf("Please enter a integer type value.\n");
        return 1;
    }
    else {
        if(age <= 5 || age > 100){
            printf("Invalid age entered. Please enter an age from (0 to 100)\n");
            goto Reinput;
            // return 1;
        }
    }

    // scanf("%d", &age);

    // if(age <= 5 || age > 100){
    //     printf("Invalid age entered. Please enter an age from (0 to 100)\n");
    //     goto Reinput;
    //     return 1;
    // }

    // printf("Your age is: %d\n", age);
    // printf("Ticket price is: %d\n", ticket_switch(age));
    // return 0;
}