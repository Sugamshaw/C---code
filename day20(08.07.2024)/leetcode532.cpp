#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int binarysearch(vector<int> &nums, int s, int target)
{
    int e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
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
int findPairs(vector<int> &nums, int k)
{
    set<pair<int, int>> uniquepair;

    sort(nums.begin(), nums.end());
    if (nums.size() == 1)
        return 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int target = abs(nums[i] + k);
        int pos = binarysearch(nums, i + 1, target);
        if (pos != -1)
        {
            uniquepair.insert(make_pair(nums[i], nums[i] + k));
        }
    }
    return uniquepair.size();
}
int main()
{
    vector<int> v = {1, 3, 1, 5, 4};
    cout << findPairs(v, 0);
    return 0;
}