#include <iostream>
#include <vector>
using namespace std;
int func()
{
}
int main()
{
    vector<int> v = {0, 1, 0, 0, 0, 1, 1, 0};

    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        if (v[s] == 0)
        {
            s++;
            continue;
        }
        if (v[e] == 1)
        {
            e--;
            continue;
        }
        swap(v[s], v[e]);
        s++;
        e--;
    }
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}