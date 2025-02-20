#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int a = num;
    a++;
    cout << "num: " << num << endl;
    ////////////
    cout << "Using Pointer-------------------------" << endl;
    int *p = &num;
    int a1 = *p;
    a1++;
    cout << "Print a1: " << a1 << endl;
    cout << "before num: " << num << endl;
    (*p)++;
    cout << "After num: " << num << endl;
    cout << "p: " << p << " *p: " << *p << endl;
    // COPYING POINTER-------------------------------------------
    int *q = p;
    cout << q << "---" << p << endl;
    cout << *q << "---" << *p << endl;
    // IMP CONCEPT
    int i = 3;
    int *t = &i;
    cout << *t << endl;
    cout << t << endl;
    // (*t)++;
    // cout << *t << endl;
    // cout << t << endl;
    // t = t + 1;
    *t = *t + 1;
    cout << t << endl;
    cout << *t << endl;
    cout << i;

    return 0;
}