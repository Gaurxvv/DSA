#include <iostream>
using namespace std;

int main()
{
    char ch[6] = "abcde";
    int ar[4] = {1, 2, 3, 4};

    char *c = &ch[0];

    cout << c << endl;
    // prints the entire string

    cout << ch << endl;
    cout << "->>" << &ch << endl;
    cout << ar << endl;

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;

    return 0;
}