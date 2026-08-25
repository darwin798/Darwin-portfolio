#include <iostream>
#include <string> // Include the string library

using namespace std;

int main() {
    string userInput; // Declare a string variable to hold user input

    // Prompt the user for input
    cout << "Please enter a string: ";
    getline(cin, userInput); // Use getline to read the entire line including spaces

    // Output the string and its length
    cout << "You entered: " << userInput << endl;
    cout << "Length of the string: " << userInput.length() << endl;

    return 0;
}