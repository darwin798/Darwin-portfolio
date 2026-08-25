#include <iostream>
using namespace std;

int main() {
    int A = 15, B = 10, C = 20;
    
    // Sorting the values
    if (A > B) {
        swap(A, B);
    // Swap A and B if A is greater than B
    }
    if (B > C) {
        swap(B, C);
    // Swap B and C if B is greater than C
    }
    if (A > B) {
        swap(A, B);
    // Swap A and B again if A is greater than B after previous swap
    }

    // Now A <= B <= C
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;

    return 0;
}
