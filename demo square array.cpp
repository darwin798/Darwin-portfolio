#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5; 
    int array[SIZE][SIZE]; 
    int sum = 0; 

    // Load integers into the square array
    cout << "Enter 25 integers for the 5x5 array:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> array[i][j]; // Input each element
        }
    }

    // Calculate the sum of the left diagonal elements
    for (int i = 0; i < SIZE; i++) {
        sum += array[i][i]; // Add the elements from the left diagonal
    }

    // Display the sum of the left diagonal
    cout << "The sum of the elements in the left diagonal is: " << sum << endl;

    return 0;
}