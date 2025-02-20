#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the Amount: ";
    cin >> amount;
    int num = 1;
    int note = 0;
    switch (num)
    {
    case 1:
    {
        note = amount / 100;
        amount = amount - (note * 100);
        cout << "Notes of 100: " << note << endl;
    }
    case 2:
        note = amount / 20;
        amount = amount - (note * 20);
        cout << "Notes of 20: " << note << endl;
    case 3:
        note = amount / 1;
        cout << "Notes of 100: " << note << endl;
        break;

    default:
        cout << "Invalid Input";
        break;
    }
}