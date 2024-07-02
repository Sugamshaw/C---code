#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxlen(vector<int> &nums, int value)
    {
        int ans = 1;
        if (nums.size() <= 1)
        {
            return 1;
        }
        if (nums.size() <= 2)
        {
            return 2;
        }
        int s = 1, e = nums.size(), previous_index = 0;
        while (s < nums.size())
        {
            if ((nums[previous_index] + nums[s]) % 2 == value)
            {
                ans++;
                previous_index = s;
                cout << nums[s] << " ";
            }
            s += 1;
        }
        cout << endl;
        return ans; 
    }
    int maximumLength(vector<int> &nums)
    {
        int a = maxlen(nums, 1);
        int b = maxlen(nums, 0);
        return max(a, b);
    }
};
int main()
{
    Solution sol;
    std::vector<int> nums1 = {1, 2, 3, 4}; // 4 6 2 3 4 4
    std::vector<int> nums2 = {1, 2, 1, 1, 2, 1, 2};
    std::vector<int> nums3 = {1, 3};
    std::vector<int> nums4 = {1, 5, 9, 4, 2};
    std::vector<int> nums5 = {2, 13, 26, 70, 76};
    std::vector<int> nums6 = {1, 8, 4, 2, 4};

    // std::cout << "Maximum length for nums1: " << sol.maximumLength(nums1) << std::endl; // Output: 4
    // std::cout << "Maximum length for nums2: " << sol.maximumLength(nums2) << std::endl; // Output: 5
    // std::cout << "Maximum length for nums3: " << sol.maximumLength(nums3) << std::endl; // Output: 2
    // std::cout << "Maximum length for nums3: " << sol.maximumLength(nums4) << std::endl; // Output: 2
    // std::cout << "Maximum length for nums3: " << sol.maximumLength(nums5) << std::endl; // Output: 2
    std::cout << "Maximum length for nums3: " << sol.maximumLength(nums6) << std::endl; // Output: 2

    return 0;
}