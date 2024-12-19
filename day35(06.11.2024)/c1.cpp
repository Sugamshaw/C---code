#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;

long long sumSubarraysModulo(const std::vector<int> &arr)
{
    int n = arr.size();
    long long totalSum = 0;

    // Iterate through all possible starting points of subarrays
    for (int i = 0; i < n; ++i)
    {
        long long currentSum = 0;

        // Iterate through all possible ending points of subarrays
        for (int j = i; j < n; ++j)
        {
            // Update current subarray sum (adding arr[j])
            currentSum += arr[j];
            currentSum %= MOD;

            // Add the current subarray sum to the total sum modulo MOD
            totalSum += currentSum;
            totalSum %= MOD;
            cout << j << " " << totalSum << endl;
        }
        cout<<endl;
    }

    return totalSum;
}

int main()
{
    std::vector<int> arr = {1, 2, 1};
    std::cout << sumSubarraysModulo(arr) << std::endl;
    return 0;
}
