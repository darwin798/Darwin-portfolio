#include <iostream>
#include <string>
using namespace std;

int main() {
    int grade;
    string message, result;
    
    cout << "Enter your grade: ";
    cin >> grade;
    
    if (grade > 60) {
        message = "Congratulations!";
        result = "You passed,.";
    } else {
        message = "Sorry!\n";
        result = "You failed,bumawi ka nalang next time.";
    }
    
    cout << message << endl;
    cout << result << endl;

    return 0;
}
