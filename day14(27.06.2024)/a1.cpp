#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int maxSubArray(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;
    int tsum = 0;
    int max_result = INT_MIN;

    for (int i = s; i <= e; i++)
    {
        int tsum = max(tsum + nums[i],tsum);
        max_result = max(max_result, tsum);
    }
    return max_result;
}
int main()
{
    vector<int> v = {1, 2, -1, -2, 2, 1, -2, 1, 4, -5, 4};
    cout << maxSubArray(v);
    return 0;
}