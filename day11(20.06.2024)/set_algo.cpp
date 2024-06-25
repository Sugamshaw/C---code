#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int func()
{
}
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v2 = {1, 2, 5, 10, 20};
    vector<int> result;
    // set_union(v.begin(), v.end(), v2.begin(), v2.end(), inserter(result, result.begin()));
    // set_intersection(v.begin(), v.end(), v2.begin(), v2.end(), inserter(result, result.begin()));
    // set_difference(v.begin(), v.end(), v2.begin(), v2.end(), inserter(result, result.begin()));
    set_symmetric_difference(v.begin(), v.end(), v2.begin(), v2.end(), inserter(result, result.begin()));

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}