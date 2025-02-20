#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
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

    int sum = getSum(num, size);
    cout << "Sum  is " << sum << endl;

    return 0;
}