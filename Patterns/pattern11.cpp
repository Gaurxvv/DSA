#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // first triangle
        int col = 1;
        int value = n - row + 1;
        while (col <= value)
        {
            cout << col;
            col++;
        }

        // star
        int start = 2 * row - 2;
        while (start)
        {
            cout << "*";
            start--;
        }

        // second triangle
        int count = n - row + 1;
        while (count)
        {
            cout << count;
            count--;
        }

        cout << endl;
        row++;
    }
}