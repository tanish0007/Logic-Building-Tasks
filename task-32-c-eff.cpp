#include <iostream>
#include <string>
using namespace std;

void newTask(string &str) {
    int n = str.length();
    if (n == 0) return;
    
    int write = 0;
    for (int read = 0; read < n; ) {
        char current = str[read];
        int count = 0;
        
        while (read < n && str[read] == current) {
            read++;
            count++;
        }
        
        str[write++] = current;
        
        if (count > 1) {
            string countStr = to_string(count);
            for (char c : countStr) 
                str[write++] = c;
        }
    }
    
    str.resize(write);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    newTask(str);
    cout << str;
    return 0;
}