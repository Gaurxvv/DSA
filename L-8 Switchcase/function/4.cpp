#include <iostream>
using namespace std;

void Count(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
}
int main()
{
    int n;
    cin >> n;
    Count(n);
}