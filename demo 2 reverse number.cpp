#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0;

    cout << "Input a Number to Reverse and press Enter: ";
    cin >> number;

    // Ensure the number is not zero to enter the loop
    if (number != 0) {
        do {
            reverse = reverse * 10;          // Shift the current reversed number left
            reverse = reverse + number % 10; // Add the last digit of the number
            number = number / 10;             // Remove the last digit from the number
        } while (number != 0); // Continue until the number is 0
    }

    cout << "New Reversed Number is: " << reverse << endl;
    return 0;
}