#include <iostream>
using namespace std;

int main(){

    int choice;
    cout << "Enter choice (1-3):\n ";
    cin >> choice;
    switch (choice)
    
    {   case 1: 
              cout << "C++'s most versatile loop\n";
            break;
            
        case 2: 
           
           cout << "C++'s conditional branch statement\n";
            break;
            
         case 3:
            cout << "C++'s multi way branch statement\n";
            break;
            
        
          default:
              cout <<"wala sa nabanggit!!\n";
              }
    return 0;

}

    