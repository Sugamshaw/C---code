#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int flips = 0;
        int ones = 0;

        // Make rows palindromic
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n / 2; j++) {
                if (grid[i][j] != grid[i][n-1-j]) {
                    flips++;
                    grid[i][j] = grid[i][n-1-j] = max(grid[i][j], grid[i][n-1-j]);
                }
            }
        }

        // Make columns palindromic
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m / 2; i++) {
                if (grid[i][j] != grid[m-1-i][j]) {
                    flips++;
                    grid[i][j] = grid[m-1-i][j] = max(grid[i][j], grid[m-1-i][j]);
                }
            }
        }

        // Count ones
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ones += grid[i][j];
            }
        }

        // Adjust to make total ones divisible by 4
        int remainder = ones % 4;
        if (remainder != 0) {
            flips += min(remainder, 4 - remainder);
        }

        return flips;
    }
};

int main()
{
    Solution sol;

    // Example 1
    vector<vector<int>> grid1 = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << sol.minFlips(grid1) << endl; // Output: 3

    // Example 2
    vector<vector<int>> grid2 = {{0, 1}, {0, 1}, {0, 0}};
    cout << sol.minFlips(grid2) << endl; // Output: 2

    // Example 3
    vector<vector<int>> grid3 = {{1}, {1}};
    cout << sol.minFlips(grid3) << endl; // Output: 2

    return 0;
}
