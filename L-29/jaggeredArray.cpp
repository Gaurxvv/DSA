#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int rowsizes[] = {2, 0, 3};
    int *jaggeredArr[3];
    jaggeredArr[0] = new int[2]{1, 2};
    jaggeredArr[1] = new int[0]{};
    jaggeredArr[2] = new int[3]{1, 2, 3};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < rowsizes[i]; j++)
        {
            cout << jaggeredArr[i][j];
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        delete[] jaggeredArr[i];
    }
    return 0;
}