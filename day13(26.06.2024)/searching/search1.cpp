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
int first_occurce(vector<int> v, int target)
{
    int s = 0, e = v.size() - 1, mid = 0, ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (v[mid] == target)
        {
            ans = mid;
            e = mid - 1;
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
    return ans;
}
int last_occurce(vector<int> v, int target)
{
    int s = 0, e = v.size() - 1, mid = 0, ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (v[mid] == target)
        {
            ans = mid;
            s = mid + 1;
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
    return ans;
}
int missing_element(vector<int> v)
{
    int s = 0, e = v.size() - 1, mid = 0, ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (v[mid] - mid == 0)
        {
            s = mid + 1;
        }
        else if (v[mid] - mid == 1)
        {
            ans = mid;
            e = mid - 1;
        }
    }
    if (s == v.size())
    {
        return v.size();
    }
    return ans;
}
int main()
{
    vector<int> v = {0, 1, 2, 3, 4};

    int ans = missing_element(v);
    if (ans != -1)
        cout << "answer : " << ans << endl;
    else
        cout << "not found" << endl;

    // cout << binary_search(v.begin(), v.end(), 55) << endl;
    return 0;
}