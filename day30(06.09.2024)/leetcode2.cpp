#include <iostream>
#include <vector>
#include <algorithm> // For std::max
using namespace std;

bool canChooseWithMinDiff(const vector<int> &start, int d, long long minDiff)
{
    int n = start.size();
    long long lastChosen = start[0]; // Pick from the first interval

    for (int i = 1; i < n; ++i)
    {
        long long nextPossible = lastChosen + minDiff;

        // If the next possible choice is outside the current interval
        if (nextPossible > start[i] + d)
        {
            return false;
        }

        // Ensure to pick the valid number from the current interval
        lastChosen = std::max(static_cast<long long>(start[i]), nextPossible);
    }

    return true;
}

long long maxPossibleScore(vector<int> &start, int d)
{
    int n = start.size();

    sort(start.begin(), start.end());

    long long low = 0, high = 2 * d, result = 0;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (canChooseWithMinDiff(start, d, mid))
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    // Test case 1
    vector<int> start1 = {1000000000, 1000000000};
    int d1 = 1000000000;
    cout << "Output for Test Case 1: " << maxPossibleScore(start1, d1) << endl;

    // Test case 2
    vector<int> start2 = {1000000000, 0};
    int d2 = 1000000000;
    cout << "Output for Test Case 2: " << maxPossibleScore(start2, d2) << endl;

    // Example 1
    vector<int> start3 = {6, 0, 3};
    int d3 = 2;
    cout << "Output for Example 1: " << maxPossibleScore(start3, d3) << endl;

    // Example 2
    vector<int> start4 = {2, 6, 13, 13};
    int d4 = 5;
    cout << "Output for Example 2: " << maxPossibleScore(start4, d4) << endl;

    return 0;
}
