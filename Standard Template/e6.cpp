#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(30);
    ms.insert(1);
    ms.insert(5);
    ms.insert(5);

    cout << "Multiset elements: ";
    for (int i : ms)
    {
        cout << i << " ";
    }
    return 0;
}