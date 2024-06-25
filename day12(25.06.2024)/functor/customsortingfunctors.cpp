#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class comparator
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
int main()
{
    vector<int> v = {205, 356, 5512, 42, 200};

    // comparator c1;
    // sort(v.begin(),v.end(),c1);
    sort(v.begin(), v.end(), comparator());

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}