/* Carrie Bailey
 * CS 221 Spring 2024
 Week 3, Program #13
 * Description: Prints an alternating star pattern*/
#include <iostream>

using namespace std;

int main() {
    for (int x = 1; x < 5; x++) {
        for (int x = 1; x < 9; x++) {
            cout << "* ";
            cout << ' ';
        }
        cout << endl;
        for (int x = 1; x < 9; x++) {
        cout << ' ';
        cout << " *";
    }
        cout<<endl;
}
//cout << ' ';
//cout << endl;
    return 0;
}
