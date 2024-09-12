#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int minBitFlips(int start, int goal)
{
    int ans = 0;
    while (start != 0 || goal != 0)
    {
        int a = start & 1;
        int b = goal & 1;
        if (a != b)
        {
            cout << start << endl;
            ans++;
        }
        start >>= 1;
        goal >>= 1;
    }
    return ans;
}
int main()
{
    cout << minBitFlips(10, 7) << endl;
    return 0;
}