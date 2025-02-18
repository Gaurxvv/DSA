#include <iostream>
using namespace std;

int main()
{
    char name[300];
    cout << "Enter a sentence: ";
    cin.getline(name, 300, ':');
    cout << "You Entered: " << name << endl;
    return 0;
}