// find if two strings are annagram

#include <iostream>
#include <string>
using namespace std;

int findOccurence (string str, char ch){
    int occurence = 0;
    for(int i=0; i < str.length() ; i++){
        if(str[i] == ch)
            occurence++;
    }
    return occurence;
}

bool isAnnagram (string str1, string str2){
    if(str1.length() != str2.length())
        return false;
    // for(int i=0; i<str1.length(); i++){
    //     int oc1 = findOccurence(str1, str1[i]);
    //     for(int j=0; j<str2.length(); j++){
    //         if(str1[i] == str2[j]){
    //             int oc2 = findOccurence(str2, str2[j]);
    //             if(oc1 == oc2)
    //                 return true;
    //         }
    //         return false;
    //     }
    // }
    
    for(int i=0; i<str1.length(); i++){
        for(int j=0; j<str2.length(); j++){
            if(str1[i] != str2[j])
                
        }
    }
    return true;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if(isAnnagram(str1,str2))
        cout << "Yes Annagram";
    else 
        cout << "No it is not annagram";
    return 0;
}