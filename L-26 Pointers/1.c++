#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 4, 5, 6, 7, 77, 44};

    // cout << "arr: " << arr << endl;
    // cout << "&arr[1]: " << &arr[1] << endl;
    // cout << "*arr: " << *arr + 5 << endl;
    // cout << "*(arr+1): " << *(arr + 1) << endl;

    // int i = 5;
    // cout << "i[arr]: " << i[arr] << endl;

    //-------------------------------------------------------------
    // int temp[10];
    // cout << sizeof(temp) << endl;
    // cout << sizeof(&temp) << endl;
    // cout << sizeof(*temp) << endl;

    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(&ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // return 0;
    //-------------------------------------------------------------
    // int a[10] = {1, 5, 43, 3};
    // cout << "->" << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;

    // int *p = &a[0];
    // cout << p << endl;
    // cout << *p << endl;
    // cout << "->" << &p << endl;
    //-------------------------------------------------------------
    int a[10] = {1, 5, 43, 3};
    cout << "->>" << &a << endl;
    int *p = &a[0];
    cout << p << endl;
    cout << "->" << &p << endl;
    p += 1;
    cout << "->>" << p << endl;
    cout << "->>" << &a[1] << endl;
}