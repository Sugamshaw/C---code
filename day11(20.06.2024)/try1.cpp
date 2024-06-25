#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int> &nums)
{
    int n = nums.size();

    int total_operations = 0;

    for (int i = 0; i < n - 2; i++)
    {
        int count_zeros = 0;
        for (int j = i; j < i + 3; j++)
        {
            if (nums[j] == 0)
            {
                ++count_zeros;
            }
            
        }
        cout << endl;
        if (count_zeros != 0)
        {
            total_operations += 1;
        }
        else{
            continue;
        }
        for (int j = i; j < i + 3; j++)
        {
            nums[j] = 1 - nums[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            return -1;
        }
    }

    return total_operations;
}
int main()
{
    vector<int> nums1 = {0, 1, 1, 1, 0, 0};
    vector<int> nums2 = {0, 1, 1, 1};
    vector<int> nums3 = {0, 0, 0};

    cout << minOperations(nums1) << endl; // Output: 3
    cout << minOperations(nums2) << endl; // Output: -1
    cout << minOperations(nums3) << endl; // Output: 3

    return 0;
}
