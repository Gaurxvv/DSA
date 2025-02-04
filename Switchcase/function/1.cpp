#include <iostream>
using namespace std;

int Pow(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * b;
    }
    return ans;
}
int main()
{
    cout << Pow(2, 2);

    return 0;
}
