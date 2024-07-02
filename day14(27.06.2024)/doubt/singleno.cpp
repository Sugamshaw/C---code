#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int func()
{
}
int main()
{
    unordered_map<int, int> m;
    vector<int> v = {1, 2, 1, 5, 2};
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    for (auto i : m)
    {
        if (i.second == 1)
        {
            cout << i.first;
        }
    }
    return 0;
}