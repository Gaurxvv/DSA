#include <iostream>
using namespace std;

int main()
// {
//     int age;
//     cout << "Enter your Age:" << endl;
//     cin >> age;

//     if (age > 50)
//     {
//         cout << "You are old";
//     }
//     else if (age < 25)
//     {
//         cout << "You are bachpan";
//     }
//     else
//     {
//         cout << "You are okayish";
//     }
// }
// {
//     int a = 9;
//     if (a == 9)
//     {
//         cout << "NINE";
//     }
//     else if (a > 0)
//     {
//         cout << "POsitive";
//     }
//     else
//     {
//         cout << "Negative";
//     }
// }

{
    char ch;
    cin >> ch;
    if (islower(ch))
    {
        cout << "Lower case";
    }
    else if (isupper(ch))
    {
        cout << " Upper case";
    }
    else
    {
        cout << "This is Numeric";
    }
}