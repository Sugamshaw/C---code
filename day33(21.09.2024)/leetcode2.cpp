#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool canFinishInTime(int mountainHeight, vector<int> &workerTimes, long long maxTime)
    {
        long long totalReducedHeight = 0;

        for (int time : workerTimes)
        {
            long long currentHeightReduced = 0;
            long long currTime = 0;
            int x = 1;

            while (true)
            {
                currTime += time * x;
                if (currTime > maxTime)
                    break;
                currentHeightReduced += 1;
                x++;
            }

            totalReducedHeight += currentHeightReduced;

            if (totalReducedHeight >= mountainHeight)
            {
                return true;
            }
        }

        return totalReducedHeight >= mountainHeight;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int> &workerTimes)
    {
        // Special case when mountain height is 0
        if (mountainHeight == 0)
            return 0;

        long long left = 1, right = 1e12;
        long long result = right;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;

            if (canFinishInTime(mountainHeight, workerTimes, mid))
            {
                result = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return result;
    }
};

int main()
{
    Solution solution;

    // Test case: mountainHeight is 0
    vector<int> workerTimes = {0};
    int mountainHeight = 0;
    long long result = solution.minNumberOfSeconds(mountainHeight, workerTimes);
    cout << result << endl; // Expected: 0

    // Additional valid test cases
    workerTimes = {2, 1, 1};
    mountainHeight = 4;
    result = solution.minNumberOfSeconds(mountainHeight, workerTimes);
    cout << result << endl; // Expected: 3

    workerTimes = {3, 2, 2, 4};
    mountainHeight = 10;
    result = solution.minNumberOfSeconds(mountainHeight, workerTimes);
    cout << result << endl; // Expected: 12

    return 0;
}
