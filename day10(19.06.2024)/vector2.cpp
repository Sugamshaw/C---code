#include <iostream>
#include <vector>
using namespace std;
int func()
{
}
int main()
{
    // vector<vector<int>> v;
    // vector<vector<int>> v1(5, vector<int>(3, 1));
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     for (int j = 0; j < v1[0].size(); j++)
    //     {
    //         cout << v1[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> v(4);
    v[0] = vector<int>(2, 1);
    v[1] = vector<int>(3, 2);
    v[2] = vector<int>(1, 3);
    v[3] = vector<int>(4, 4);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}