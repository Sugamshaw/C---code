#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int func()
{
}
int main()
{
    // vector<int> v = {10, 20, 30, 40, 50};
    // int ans = binary_search(v.begin(), v.end(), 40);
    // auto ans = lower_bound(v.begin(), v.end(), 40);
    // auto range = equal_range(v.begin(), v.end(), 40);
    // cout << ans1 << endl;
    // for (auto i = range.first; i != range.second; i++)
    // {
    //     cout << distance(v.begin(), i) << endl;
    // }

    // int a = 10;
    // int b = 251;
    // cout << max(a, b) << endl;
    // cout << min(a, b) << endl;
    vector<int> v = {10, 151, 20, 351};
    auto it = max_element(v.begin(), v.end());
    auto it2 = min_element(v.begin(), v.end());

    cout << *it << endl;
    cout << *it2 << endl;

    return 0;
}