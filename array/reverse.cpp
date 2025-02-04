#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << endl;
}

int main()
{

    int arr[6] = {2, 4, 3, 5, 6, 7};
    int brr[5] = {4, 3, 2, 1, -2};
    printArray(arr, 6);
    reverseArray(arr, 6);
    printArray(arr, 6);

    return 0;
}