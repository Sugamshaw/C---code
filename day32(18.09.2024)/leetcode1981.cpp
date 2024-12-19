#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

using namespace std;

class Solution
{
public:
    int solve(vector<vector<int>> &mat, int row, int col, int target)
    {
        int rsize = mat.size();
        int csize = mat[0].size();
        if ((rsize == row || csize == col))
        {
            cout << target << endl;
            if (target < 0)
            {
                return abs(target);
            }
            return target;
        }

        int include = solve(mat, row + 1, col, target - mat[row][col]);
        int exclude = solve(mat, row, col + 1, target);

        return min(include, exclude);
    }
    int minimizeTheDifference(vector<vector<int>> &mat, int target)
    {
        return solve(mat, 0, 0, target);
    }
};
int main()
{
    Solution sol;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 13;
    int result = sol.minimizeTheDifference(mat, target);
    cout << "Minimum Difference: " << result << endl;

    vector<vector<int>> mat1 = {
        {10, 3, 7, 7, 9, 6, 9, 8, 9, 5},
        {1, 1, 6, 8, 6, 7, 7, 9, 3, 9},
        {3, 4, 4, 1, 3, 6, 3, 3, 9, 9},
        {6, 9, 9, 3, 8, 7, 9, 6, 10, 6}};
    int target1 = 5;
    int result1 = sol.minimizeTheDifference(mat1, target1);
    cout << "Minimum Difference: " << result1 << endl;
    return 0;
    // return 0;
}
