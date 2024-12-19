#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxKForAdjacentIncreasingSubarrays(vector<int>& nums) {
    int n = nums.size();
    if (n < 2) return 0;  // Edge case: less than 2 elements, no such subarrays can exist

    // Arrays to store the length of the longest increasing subarray ending at index i
    // and starting at index i.
    vector<int> left(n, 1), right(n, 1);

    // Fill the left array (longest increasing subarray ending at index i)
    for (int i = 1; i < n; ++i) {
        if (nums[i] > nums[i - 1]) {
            left[i] = left[i - 1] + 1;
        }
    }

    // Fill the right array (longest increasing subarray starting at index i)
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            right[i] = right[i + 1] + 1;
        }
    }

    // Now check for the maximum possible value of k
    int max_k = 0;
    for (int i = 0; i < n - 1; ++i) {
        int k = min(left[i], right[i + 1]);
        if (k > max_k) {
            max_k = k;
        }
    }

    return max_k;
}

int main() {
    vector<int> nums1 = {2, 5, 7, 8, 9, 2, 3, 4, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4, 4, 4, 4, 5, 6, 7};

    cout << "Max k for nums1: " << maxKForAdjacentIncreasingSubarrays(nums1) << endl;
    cout << "Max k for nums2: " << maxKForAdjacentIncreasingSubarrays(nums2) << endl;

    return 0;
}
