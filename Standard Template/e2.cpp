#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3};
    l.push_front(5); // Add at front
    l.push_back(8);  // Add at back

    cout << "list ELements";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.sort();
    cout << "Sorted list ELements";
    for (int i : l)
    {
        cout << i << " ";
    }

    return 0;
}