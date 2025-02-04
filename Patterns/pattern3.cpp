#include <iostream>
using namespace std;

int main()
{
    int row = 1;

    int n;
    cin >> n;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            col++;
            count++;
        }
        cout << endl;
        row++;
    }
}