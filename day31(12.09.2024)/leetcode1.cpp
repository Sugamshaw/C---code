#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int countConsistentStrings(string allowed, vector<string> &words)
{
    unordered_map<char, int> str;

    for (int i = 0; i < allowed.length(); i++)
    {
        if (str[allowed[i]] >= 0)
        {
            str[allowed[i]]++;
        }
    }

    int ans = 0;
    for (auto string : words)
    {
        int flag = 1;
        for (int i = 0; i < string.length(); i++)
        {
            if (str[string[i]] == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << string << endl;
            ans++;
        }
    }
    return ans;
}
vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
{
    vector<int> ans;
    vector<int> presum;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
        {
            presum.push_back(arr[i]);
        }
        else
        {
            presum.push_back(arr[i] ^ presum[i - 1]);
        }
    }
    for (auto i : presum)
    {
        cout << i << endl;
    }
    for (int i = 0; i < queries.size(); i++)
    {
        int start = queries[i][0];
        int end = queries[i][1];
        int xorans = 0;
        if (start == 0)
        {
            xorans = presum[end];
        }
        else
        {
            xorans = presum[end] ^ presum[start - 1];
        }
        ans.push_back(xorans);
    }
    return ans;
}
vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        partial_sum(arr.begin(), arr.end(), arr.begin(), bit_xor<int>());
        int n=queries.size();
        vector<int> ans(n);
        int i=0;
        for(auto& q: queries){
            int q0=q[0], q1=q[1];
            ans[i++]=(q0==0)?arr[q1]:(arr[q1]^arr[q0-1]);
        }
        return ans;
    }
int main()
{
    vector<int> arr = {1, 3, 4, 8};
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 3}, {3, 3}};
    vector<int> ans = xorQueries(arr, queries);
    for (auto i : ans)
    {
        cout << i << endl;
    }
    // string allowed = "ab";
    // vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};
    // cout << countConsistentStrings(allowed, words) << endl;
    return 0;
}