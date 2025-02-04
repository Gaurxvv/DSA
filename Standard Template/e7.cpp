#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> ms;
    ms.insert({1, "apple"});
    ms.insert({1, "Banana"});
    ms.insert({1, "Cherry"});
    ms.insert({1, "Strawberry"});

    cout << "Map element:\n";
    for (auto pair : ms)
    {
        cout << pair.first << "=> " << pair.second << endl;
    }
    return 0;
}