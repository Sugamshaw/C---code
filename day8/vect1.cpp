#include <iostream>
#include <vector>
using namespace std;
int search(vector<vector<int>> arr, int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int minval(vector<vector<int>> arr, int row, int col)
{
    int min=INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] <min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    vector<vector<int>> v(4, vector<int>(3, 0));
    vector<vector<int>> v1(4, vector<int>(3, 10));
    int row = v1.size();
    int col = v1[0].size();
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << v1[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // if (search(v1, row, col, 10))
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "not Found" << endl;
    // }
    cout<<minval(v1,4,3);
    return 0;
}