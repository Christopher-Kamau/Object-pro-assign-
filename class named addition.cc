/*
Name:
Reg No:
Date:
Version:
Description: C++ program using class and object to multiply 3 numbers
*/

#include <iostream>
using namespace std;

class Addition {
    public:
        int a, b, c;
};

int main() {
    
    Addition addition1;

    addition1.a = 22;
    addition1.b = 30;
    addition1.c = 50;

    float mult = addition1.a * addition1.b * addition1.c;

    
    cout << "The multiplication is: " << mult << endl;

    return 0;
}
