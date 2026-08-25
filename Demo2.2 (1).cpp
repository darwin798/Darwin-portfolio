#include <iostream>
using namespace std;

int main() {
    float grade;
    
    cout << "Enter the grade: ";
    cin >> grade;
    
    if (grade >= 90) {
        cout << "A\n" <<"You Have passing Grades" << endl;
    } else if (grade >= 80) {
        cout << "B\n" <<"Ayos na rin" << endl;
    } else if (grade >= 70) {
        cout << "C\n" <<"Bawi ka nalang next time" << endl;
    } else {
        cout << "D\n" << "Maybe next time" << endl;
    }
   
    return 0;
}
