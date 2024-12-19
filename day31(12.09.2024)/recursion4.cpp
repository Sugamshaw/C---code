#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int solve(vector<int> nums, int size, int index)
{
    if (index >= size)
    {
        return 0;
    }
    // cout << " value : ";
    // for (int i = index; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
    int include = nums[index] + solve(nums, size, index + 2);
    cout << "include at index : " << index << " value: " << include << endl;
    // cout << " value : ";
    // for (int i = intrydex; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
    int exclude = 0 + solve(nums, size, index + 1);
    cout << "exclude: index : " << index << " value: " << exclude << endl;
    int max_value = max(include, exclude);
    return max_value;
}
int rob(vector<int> &nums) { return solve(nums, nums.size(), 0); }

int main()
{
    vector<int> nums = {2, 1, 1, 2};
    cout << rob(nums) << endl;
    return 0;
}