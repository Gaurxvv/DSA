#include <iostream>
using namespace std;
void update(int **p)
{
    **p = **p + 1;
}
int main()
{
    int i = 5;
    int *p = &i;
    int **ptr2 = &p;

    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << ptr2 << endl;
    update(ptr2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << ptr2 << endl;

    // cout << "ptr2-> " << &ptr2 << endl;
    // cout << "**ptr2-> " << ptr2 << endl;
    // cout << "&ptr-> " << &p << endl;
    // cout << "i-> " << i << endl;
    // cout << "value of i " << *p << endl;
    // cout << "value of i " << **ptr2 << endl;

    return 0;
}
