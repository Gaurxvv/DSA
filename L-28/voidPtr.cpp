#include <iostream>
using namespace std;
int main()
{
    int a = 6;
    float b = 6.4;
    void *ptr;

    ptr = &a;
    cout << ptr << endl;
    cout << "value of x: " << *(static_cast<int *>(ptr)) << endl;

    ptr = &b;
    cout << "value of b: " << *(static_cast<float *>(ptr)) << endl;
    cout << ptr;
}