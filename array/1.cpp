#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "value of array : " << arr[i] << endl;
    }
}

int main()
{

    int a[10] = {0};
    printArray(a, 10);
    // cout << "Everything is Fine" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Array: " << a[i] << endl;
    // }
    cout << endl;
    int second[10] = {2, 3};
    printArray(second, 10);
    // cout << "value of array at index 6: " << second[5];
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "value of Second array : " << second[i] << endl;
    // }
    cout << endl;

    // Using function
    int third[10] = {1};
    printArray(third, 10);
    // for (int i = 0; i < 10; i++)
    // {
    //     third[i] = 1;
    //     cout << "value of third array : " << third[i] << endl;
    // }
    int thirdSize = sizeof(third) / sizeof(int);
    cout << thirdSize;

    return 0;
}
