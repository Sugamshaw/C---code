#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minimumCost(int m, int n, vector<int> &horizontalCut,
                    vector<int> &verticalCut)
    {
        // Sort cuts in descending order
        sort(horizontalCut.begin(), horizontalCut.end(), greater<int>());
        sort(verticalCut.begin(), verticalCut.end(), greater<int>());

        int h = 0, v = 0;               // pointers for horizontal and vertical cuts
        int h_pieces = 1, v_pieces = 1; // initial number of horizontal and vertical pieces
        int cost = 0;

        // Process both horizontal and vertical cuts using a greedy approach
        while (h < horizontalCut.size() && v < verticalCut.size())
        {
            if (horizontalCut[h] >= verticalCut[v])
            {
                cost += horizontalCut[h] * v_pieces;
                h_pieces++;
                h++;
            }
            else
            {
                cost += verticalCut[v] * h_pieces;
                v_pieces++;
                v++;
            }
        }

        // Add the remaining horizontal cuts
        while (h < horizontalCut.size())
        {
            cost += horizontalCut[h] * v_pieces;
            h_pieces++;
            h++;
        }

        // Add the remaining vertical cuts
        while (v < verticalCut.size())
        {
            cost += verticalCut[v] * h_pieces;
            v_pieces++;
            v++;
        }

        return cost;
    }
};
int main()
{
    vector<int> hori = {2, 3, 2, 3, 1};
    vector<int> ver = {1, 2};
    Solution solution;
    cout << solution.minimumCost(6, 3, hori, ver) << endl; // Output the minimum cost
    return 0;
}
// int main() {
//     vector<int> hori = {2, 3, 2, 3, 1};
//     vector<int> ver = {1, 2};
//     Solution solution;
//     cout << solution.minimumCost(6, 3, hori, ver) << endl; // Output the minimum cost
//     return 0;
// }

// int main()
// {
//     vector<int> hori = {2, 3, 2, 3, 1};
//     vector<int> ver = {1, 2};

//     cout << minimumCost(6, 3, hori, ver) << endl;

//     return 0;
// }