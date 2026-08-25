#include <iostream>
using namespace std;

// Function to compute the factorial of a non-negative integer
unsigned long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0; // Return 0 for negative input
    } else if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1 and 1! = 1
    } else {
        unsigned long long result = 1; // Use unsigned long long to handle large results
        for (int i = 2; i <= n; ++i) {
            result *= i; // Multiply result by each integer up to n
        }
        return result;
    }
}

int main() {
    int n;
    cout << "Input n for factorial function: ";
    cin >> n; // Get user input

    unsigned long long result = factorial(n); // Call the factorial function
    if (n >= 0) { // Only print the result if n is non-negative
        cout << "The factorial of integer " << n << " is: " << result << endl;
    }

    return 0;
}