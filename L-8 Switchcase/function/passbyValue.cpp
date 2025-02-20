#include <iostream>
using namespace std;

void passbyValue(int n)
{
    n++;
    cout << "n is " << n << endl;
}
int main()
{
    int n;
    cin >> n;
    passbyValue(n);
    cout << "number n is " << n << endl;
    return 0;
}