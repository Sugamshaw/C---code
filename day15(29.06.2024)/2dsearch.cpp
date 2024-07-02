#include <iostream>
#include <vector>
using namespace std;
int twodarray(vector<vector<int>> v, int target)
{
    int row = v.size();
    int col = v[0].size();
    int s = 0, e = row * col - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int ri = mid / col;
        int ci = mid % col;
        // cout << v[ri][ci] << endl;
        if (v[ri][ci] == target)
        {
            return mid;
        }
        else if (v[ri][ci] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<vector<int>> v = {{1, 2, 3, 4, 5},
                             {6, 7, 8, 9, 10},
                             {11, 12, 13, 14, 15},
                             {16, 17, 18, 19, 20}};

    cout << twodarray(v, 9) << endl;
    return 0;
}