#include <iostream>
using namespace std;
// void print(int *p)
// {
//     cout << *p << endl;
// }
// void update(int *p)
// {
//     // p = p + 1;
//     *p = *p + 1;
//     // cout << "upadted value: " << *p << endl;
// }

int getsum(int *arr, int n)
{
    // cout << endl
    //      << "size: " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // int value = 5;
    // int *p = &value;
    // print(p);
    // update(p);
    // print(p);

    int arr[6] = {1, 2, 3, 4, 5, 55};
    cout << "sum is " << getsum(arr + 2, 2) << endl;

    return 0;
}