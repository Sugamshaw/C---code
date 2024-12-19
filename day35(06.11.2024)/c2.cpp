#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;
    
    int sumOfGoodSubsequences(vector<int>& nums) {
        unordered_map<int, long long> dp; // Map to store the sum of subsequences ending at each number
        long long totalSum = 0; // To store the final sum of all good subsequences
        
        // Process each number in the array
        for (int num : nums) {
            // Compute the new subsequences sum ending with `num`
            long long newSubsequenceSum = num; // The subsequence of just the number itself
            
            // Extend subsequences ending at num-1
            if (dp.find(num - 1) != dp.end()) {
                newSubsequenceSum += dp[num - 1];
                newSubsequenceSum %= MOD;
            }

            // Extend subsequences ending at num+1
            if (dp.find(num + 1) != dp.end()) {
                newSubsequenceSum += dp[num + 1];
                newSubsequenceSum %= MOD;
            }

            // Update dp for the current num
            dp[num] = (dp[num] + newSubsequenceSum) % MOD;

            // Add the subsequences ending at num to the total sum
            totalSum = (totalSum + dp[num]) % MOD;
        }

        return totalSum;
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 2, 1};
    cout << solution.sumOfGoodSubsequences(nums1) << endl;  // Expected Output: 14

    vector<int> nums2 = {3, 4, 5};
    cout << solution.sumOfGoodSubsequences(nums2) << endl;  // Expected Output: 40

    return 0;
}
