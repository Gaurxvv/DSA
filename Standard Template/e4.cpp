#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(30);
    s.insert(4);
    s.insert(11);
    s.insert(0);
    cout << "set element:" << endl;
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << s.size();
    return 0;
}