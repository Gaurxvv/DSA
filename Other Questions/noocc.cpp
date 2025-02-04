#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int a[9] = {1, 2, 3, 4, 4, 4, 4, 4, 4};
    int first = firstOcc(a, 9, 4);
    int last = lastOcc(a, 9, 4);
    int number = (last - first) + 1;
    cout << "first occurrence of 3 is at index " << firstOcc(a, 9, 4) << endl;
    cout << "first occurrence of 3 is at index " << lastOcc(a, 9, 4) << endl;
    cout << "Total no of element : " << number;
    return 0;
}