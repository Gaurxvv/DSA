#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    // or
    int *p = 0;
    p = &num;
    cout << "address: " << p << endl;
    cout << "value: " << *p << endl;

    cout << "address: " << ptr << endl;
    cout << "value: " << *ptr << endl;
    cout << "size of pointer: " << sizeof(ptr) << endl;

    double num1 = 6.2;
    double *ptr1 = &num1;
    cout << "address: " << ptr1 << endl;
    cout << "value: " << *ptr1 << endl;
    cout << "size of pointer: " << sizeof(ptr1) << endl;

    return 0;
}