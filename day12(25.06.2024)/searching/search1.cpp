#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binary_search(vector<int> v, int target)
{
    int s = 0, e = v.size(), mid = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (v[mid] == target)
        {
            return mid;
        }
        else if (v[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ans = binary_search(v, 20);
    if (ans != -1)
        cout << "Position : " << ans + 1 << endl;
    else
        cout << "not found" << endl;

    cout << binary_search(v.begin(), v.end(), 55) << endl;
    return 0;
}