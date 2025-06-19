#include <iostream>
using namespace std;

void print(int rows)
{
    if (rows <= 0) {
        return;
    }
    for (int i = 0; i < 2 * rows - 1; i++) {
        if (i < rows) {
            for (int j = 0; j < 2 * rows - i - 1; j++) {
                if (j < i) {
                    cout << "  ";
                }
                else {
                    cout << "* ";
                }
            }
        }
        else {
            for (int j = 0; j < i + 1; j++) {
                if (j < 2 * rows - i - 2) {
                    cout << "  ";
                }
                else {
                    cout << "* ";
                }
            }
        }
        cout << endl;
    }
}

int main()
{
    int rows = 4;
    print(rows);
    return 0;
}