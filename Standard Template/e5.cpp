#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";
    m[4] = "Strawberry";

    cout << "Map element:\n";
    for (auto pair : m)
    {
        cout << pair.first << "=> " << pair.second << endl;
    }
    return 0;
}