#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[l] <= nums[mid])
        {
            if (nums[l] <= target && target < nums[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (nums[mid] < target && target <= nums[r]) //
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1; // No need to debug this line.
}
int findMin(vector<int> &nums)
{
    int start = 0, end = nums.size(), ans = start;
    while (nums[start] > nums[end])
    {
        int mid = (start + end) >> 1;
        if (nums[mid] <= nums[start] && nums[mid] <= nums[end])
            end = mid;
        else if (nums[mid] >= nums[start] && nums[mid] >= nums[end])
            start = mid + 1;
        else
            return nums[mid];
        ans = start;
    }
    return nums[ans];
}
int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = (low + high) >> 1;
        if (nums[mid] >= nums[mid + 1])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int lengthOfLIS(vector<int> &nums)
{
    vector<int> ans;
    ans.push_back(nums[0]);
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > ans.back())
        {
            ans.push_back(nums[i]);
        }
        else
        {
            int index = lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin(); // Before solving get acquainted with lower_bound()
            ans[index] = nums[i];
        }
    }
    return ans.size();
}
int main()
{
    vector<int> ans = {5, 6, 7, 8, 2, 3, 4};
    cout << lengthOfLIS(ans) << endl;
    cout << lower_bound(ans.begin(), ans.end(), 7) - ans.begin() << endl;
    return 0;
}