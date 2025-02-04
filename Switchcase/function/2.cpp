#include <iostream>
using namespace std;

bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    // isEven(2);
    cout << "given number is even or not:" << isEven(0);
}