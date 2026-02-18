#include <iostream>
using namespace std;

int main() {
    int a = 10;              // simple variable
    int *p = &a;             // pointer variable

    cout << "Value of a: " << a << endl;        // original value
    cout << "Address stored in p: " << p << endl; // address of a
    cout << "Address of a: " << &a << endl;     // same as p
    cout << "Dereferencing p: " << *p << endl;  // value of a via pointer

    // pointer to pointer example
    int b = 20;              // simple variable
    int *pb = &b;            // pointer to b
    int **pp = &pb;          // pointer to pointer (points to pb)

    cout << "Value of b: " << b << endl; //orignal value 
    cout << "Address stored in pb: " << pb << endl;   // address of b
    cout << "Address of b: " << &b << endl;           // same as pb
    cout << "value  of pb :"<<*pp<<endl;              // value at pb which is adress b
    cout << "Address stored in pp: " << pp << endl;   // address of pb
    cout << "Dereferencing pb: " << *pb << endl;      // value of b
    cout << "Double dereferencing pp: " << **pp << endl; // value of b via pp

    return 0;
}