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
//         while (j <= n)
//         {
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//             j++;
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
        while (j <= i)
        {
            char val = 'A' + i + j - 2;
            cout << val << " ";
            val++;
            j++;
        }
        cout << endl;
        i++;
    }
}