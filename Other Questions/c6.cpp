#include <iostream>
#include <math.h>
using namespace std;

// int main()
// {
//     // ans = digit x10 + answer;
//     // ans = answer x10 +digit;
//     int n;
//     cin >> n;
//     float ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans;

//         n = n >> 1;
//         i++;
//     }
//     cout << "Answer is " << ans << endl;
// }

int main()
{
    int n;

    cin >> n;

    int i = 0;

    float ans = 0;

    int r = 1 + (~n); //-n bhi likh skte hai

    while (r != 0)
    {

        int bit = r & 1; // checks lsb and stores it in ans

        ans = (bit * pow(10, i)) + ans;

        r = r >> 1;

        i++;
    }

    cout << ans;
}