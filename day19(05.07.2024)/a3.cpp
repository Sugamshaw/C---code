#include <iostream>
#include <vector>

using namespace std;

int countSubmatrices(vector<vector<char>> &grid)
{
    int m = grid.size(), n = grid[0].size();
    vector<vector<pair<int, int>>> prefixSum(m + 1, vector<pair<int, int>>(n + 1, {0, 0}));

    // Calculate prefix sum
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prefixSum[i][j] = {
                prefixSum[i - 1][j].first + prefixSum[i][j - 1].first - prefixSum[i - 1][j - 1].first + (grid[i - 1][j - 1] == 'X'),
                prefixSum[i - 1][j].second + prefixSum[i][j - 1].second - prefixSum[i - 1][j - 1].second + (grid[i - 1][j - 1] == 'Y')};
        }
    }

    int result = 0;

    // Check all submatrices that include grid[0][0]
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int countX = prefixSum[i][j].first;
            int countY = prefixSum[i][j].second;

            if (countX == countY && countX > 0)
            {
                result++;
            }
        }
    }

    return result;
}

int main()
{
    vector<vector<char>> grid = {
        {'X', 'Y', '.'},
        {'Y', '.', '.'}};

    cout << "Number of valid submatrices: " << countSubmatrices(grid) << endl;
    return 0;
}
