#include <iostream>
using namespace std;
void update(int arr[], int n)
{
    cout << "inside the function";
    arr[0] = 120;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << "outside the function" << endl;
}
int main()
{
    int arr[3] = {2, 3, 4};
    update(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    return 0;
}