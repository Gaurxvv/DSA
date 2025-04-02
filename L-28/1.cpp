#include <iostream>
using namespace std;

// void update(int &n)
// {
//     n++;
// }

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // int i = 5;
    // int &j = i;
    // cout << "i" << i << endl;
    // cout << "j" << j << endl;
    // i++;
    // cout << "j" << j << endl;
    // cout << "i" << i << endl;
    // j++;
    // cout << "j" << j << endl;
    // cout << "i" << i << endl;
    //------------------------------------------------

    // int n = 3;
    // update(n);
    // cout << n << endl;

    //------------------------------------------------
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> n;
    }
    int total = getSum(arr, n);
    cout << total;

    return 0;
}