#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(11);
    d.push_front(2);
    d.push_front(1);
    d.erase(d.begin() + 2);
    cout << "Deque element:" << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    return 0;
}
