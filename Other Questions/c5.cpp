#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "A&B :" << (a & b) << endl;
    cout << "A|B:" << (a | b) << endl;
    cout << "~A:" << (~a) << endl;
    cout << "A^B:" << (a ^ b) << endl;

    cout << (17 >> 1) << endl; // right shift
    cout << (17 << 1) << endl; // left shift
}