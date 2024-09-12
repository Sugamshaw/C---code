#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool comp(pair<int, string> m1, pair<int, string> m2)
{
    return m1.first > m2.first;
}
vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    vector<pair<int, string>> v;
    for (int i = 0; i < names.size(); i++)
    {
        v.push_back({heights[i], names[i]});
    }
    sort(v.begin(), v.end(), comp);
    vector<string> ans;
    for (auto i:v)
    {
        ans.push_back(i.second);
    }
    return ans;
}
int main()
{
    vector<string> names = {"Alice","Bob","Bob"};
    vector<int> heights = {155,185,150};
    vector<string> ans = sortPeople(names, heights);
    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}