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
void reverseAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[10] = {22, 33, 42, 21, 12, 32, 26, 54, 1, 8};
    printArray(arr, 10);
    reverseAlternate(arr, 10);
    printArray(arr, 10);

    return 0;
}