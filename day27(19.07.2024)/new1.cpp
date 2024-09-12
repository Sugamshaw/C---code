#include <iostream>
#include <vector>
#include <cmath>

long long minOperations(const std::vector<int> &nums, const std::vector<int> &target)
{
    int n = nums.size();
    long long result = 0;
    long long diff = 0;

    for (int i = 0; i < n; i++)
    {
        diff += target[i] - nums[i];
        result += std::abs(diff);
    }

    return result;
}

int main()
{
    std::vector<int> nums1 = {3, 5, 1, 2};
    std::vector<int> target1 = {4, 6, 2, 4};
    std::cout << minOperations(nums1, target1) << std::endl; // Output: 2

    std::vector<int> nums2 = {1, 3, 2};
    std::vector<int> target2 = {2, 1, 4};
    std::cout << minOperations(nums2, target2) << std::endl; // Output: 5

    return 0;
}