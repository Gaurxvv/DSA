#include <iostream>
using namespace std;

bool isPresent(int arr[][2], int target, int n, int m)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Address: " << i << j << endl;
                return 1;
            }
        }
    }
    return 0;
}
void printSumcol(int arr[][2], int n, int m)
{
    cout << "Printing  colsum->" << endl;
    for (int j = 0; j < 2; j++)
    {
        int sum = 0;
        for (int i = 0; i < 2; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " " << "\n";
    }
}
void printSumrow(int arr[][2], int n, int m)
{
    cout << "Printing  rowsum->" << endl;
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
int largestRowsum(int arr[][2], int n, int m)
{
    int rowIndex = -1;
    int maxi = INT8_MIN;
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "largest Row Sum: " << maxi << endl;
    cout << "largest Row index: " << rowIndex << endl;
}
int largestColsum(int arr[][2], int n, int m)
{
    int colIndex = -1;
    int maxi = INT8_MIN;
    for (int j = 0; j < 2; j++)
    {
        int sum = 0;
        for (int i = 0; i < 2; i++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            colIndex = j;
        }
    }
    cout << "largest Col Sum: " << maxi << endl;
    cout << "largest Col Index: " << colIndex << endl;
}
int main()
{
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "2D-Array\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    largestRowsum(arr, 2, 2);
    largestColsum(arr, 2, 2);
    // printSumrow(arr, 2, 2);
    // printSumcol(arr, 2, 2);

    // cout << "Enter the element to search: " << endl;
    // int target;
    // cin >> target;
    // if (isPresent(arr, target, 2, 2))
    // {
    //     cout << "Element found" << endl;
    // }
    // else
    // {
    //     cout << "Element Not found";
    // }
    return 0;
}
