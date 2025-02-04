#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;
    cout << "Choose Operation:+,-,*,/" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "invalid input.";
    }
}