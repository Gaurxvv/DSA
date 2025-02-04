#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {5, 6, 8, 9, 7, 2};
    v.push_back(5);
    v.push_back(1);
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    sort(v.begin(), v.end());
    cout << endl;
    cout << "sorted vector" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    reverse(v.begin(), v.end());
    cout << endl;
    cout << "reversed vector" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}