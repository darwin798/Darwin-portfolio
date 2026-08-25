#include <iostream>
using namespace std;

int main() {
    double total = 0.0; 
    int counter = 0;   
    double average = 0.0; 
    int grade;
    cout << "YOUR GRADES!!! \n";
    cout << "Enter the grade scored(Enter -999 to quit:): \n";

    do {
        cin >> grade;

        if (grade != -999) { 
            total += grade; 
            counter++; 
        }

    } while (grade != -999); 

    
    if (counter > 0) {
        average = total / counter; 
        cout << "The average of your " << counter << " grades is: " << average << endl;
    } else {
        cout << "No grades were entered." << endl;
    }

    return 0;
}