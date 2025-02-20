#include <iostream>
using namespace std;

int main()
// {
//     int n;
//     int i = 1;
//     int sum = 0;
//     cin >> n;
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//         i++;
//     }
//     cout << " Total even: " << sum;
// }

// {
//     float farh, cels;
//     cout << "Enter Fahrenheit Value: ";
//     cin >> farh;
//     cels = (farh - 32) * 5 / 9;
//     cout << "cels is: " << cels;
// }
// prime
{
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << i << endl;
        }
        else
        {
            cout << "Prime" << i << endl;
        }
        i++;
    }
}