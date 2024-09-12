#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
private:
    int m, n;
    vector<vector<int>> grid;
    unordered_map<int, unordered_map<int, int>> memo;

    int dfs(int row, int mask) {
        if (row == m) return 0;
        if (memo[row].count(mask)) return memo[row][mask];

        int maxScore = dfs(row + 1, mask);  // Option to not choose from this row

        for (int col = 0; col < n; col++) {
            int val = grid[row][col];
            if ((mask & (1 << val)) == 0) {  // If this value hasn't been used
                maxScore = max(maxScore, val + dfs(row + 1, mask | (1 << val)));
            }
        }

        return memo[row][mask] = maxScore;
    }

public:
    int maxScore(vector<vector<int>>& grid) {
        this->grid = grid;
        this->m = grid.size();
        this->n = grid[0].size();
        return dfs(0, 0);
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid1 = {{1,2,3},{4,3,2},{1,1,1}};
    vector<vector<int>> grid2 = {{8,7,6},{8,3,2}};

    cout << "Maximum Score for grid1: " << sol.maxScore(grid1) << endl; // Expected Output: 8
    cout << "Maximum Score for grid2: " << sol.maxScore(grid2) << endl; // Expected Output: 15

    return 0;
}