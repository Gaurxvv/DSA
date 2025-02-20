#include <iostream>
using namespace std;

int main()
// {
//     int i = 1;
//     int n;
//     cin >> n;
//     while (i <= n)
//     {
//         int j = 1;
//         int val = i;
//         while (j <= i)
//         {
//             cout << val;
//             j++;
//             val++;
//         }
//         cout << endl;
//         i++;
//     }
// }
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int val = n - i + 1;
        while (j <= i)
        {
            cout << val;
            j++;
            val--;
        }
        cout << endl;
        i++;
    }
}