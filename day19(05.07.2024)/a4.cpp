#include <iostream>
#include <vector>

using namespace std;

int minimumCost(string target, vector<string> &words, vector<int> &costs)
{
    int n = target.length();
    vector<long long> dp(n + 1, LLONG_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < words.size(); j++)
        {
            int len = words[j].length();
            if (i >= len && target.substr(i - len, len) == words[j])
            {
                dp[i] = min(dp[i], dp[i - len] + costs[j]);
            }
        }
    }

    return dp[n] == LLONG_MAX ? -1 : dp[n];
}
int main()
{
    vector<string> grid = {"z", "zz", "zzz"};
    vector<int> grid2 = {1, 10, 100};

    cout << "Number of valid submatrices: " << minimumCost("aaaa", grid, grid2) << endl;
    return 0;
}