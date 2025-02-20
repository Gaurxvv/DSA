#include <iostream>
using namespace std;

void fibo(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b;
    for (int i = 0; i < n; i++)
    {
        int nextno = a + b;
        cout << " " << nextno << "";
        a = b;
        b = nextno;
    }
}
int main()
{
    int n;
    cin >> n;
    fibo(n);
    return 0;
}
