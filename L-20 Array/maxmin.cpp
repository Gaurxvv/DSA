#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}
int getMin(int arr[], int size)
{
    int mini = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}

int main()
{
    int size;
    cin >> size;

    int num[100];
    cout << "Enter the Value of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Value of  array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    int min = getMin(num, size);
    int max = getMax(num, size);
    cout << "MIN value is " << min << endl;
    cout << "Max value is " << max << endl;

    return 0;
}