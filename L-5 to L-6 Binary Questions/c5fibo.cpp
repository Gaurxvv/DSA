#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextNo = a + b;
        cout << nextNo << " ";
        a = b;
        b = nextNo;
    }
}