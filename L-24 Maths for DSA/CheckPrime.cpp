#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return true;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "The Given No. is Prime";
    }
    else
    {
        cout << "The Given No. is Not Prime";
    }
    return 0;
}
