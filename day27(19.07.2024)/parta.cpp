#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool iscookingdone(int p, int c, vector<int> cookRank, int max_time)
{
    int parta_made = 0;
    // cout << "cook: " << c << endl;
    for (int i = 0; i < c; i++)
    {
        int cookingtime = 0;
        // cout << "cook : " << i + 1 << endl;
        for (int j = 0; j < p; j++)
        {
            cookingtime += ((j + 1) * cookRank[i]);
            // cout << "cookingtime : " << cookingtime << endl;
            if (cookingtime <= max_time)
            {
                parta_made++;
                if (parta_made == p)
                {
                    return true;
                }
            }
            else
            {
                break;
            }
        }
    }
    return false;
}
int parta(int p, int c, vector<int> cookRank)
{
    int start = 0, ans = -1;
    int high = *max_element(cookRank.begin(), cookRank.end());
    int end = high * ((p * (p + 1)) / 2);
    // cout << "cook: " << c << endl;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (iscookingdone(p, c, cookRank, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, c;
        cin >> p >> c;
        vector<int> arr;
        while (c--)
        {
            int n;
            cin >> n;
            arr.push_back(n);
        }
        cout << parta(p, arr.size(), arr) << endl;
    }
    return 0;
}