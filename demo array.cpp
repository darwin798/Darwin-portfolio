#include <iostream>

using namespace std;

int main() {
    int x[5], i, j;

    // Initialize the array
    for (i = 0; i < 5; i++) {
        x[i] = (1 + i) * 2 - 1; 
    }

    // Print the pattern
    for (i = 0; i < 6; i++) {
        for (j = 0; j < i - 1; j++) {
            cout << " + "; 
        }
        for (j = i; j < 5; j++) {
            cout << "*" << x[j]; 
        }
        cout << endl; 
    }

    return 0;
}