#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void substring(string str, string output, int index, vector<string> &ans)
{
    if (index == str.length())
    {
        // cout << output << endl;
        ans.push_back(output);
        return;
    }
    // include
    substring(str, output + str[index], index + 1, ans);
    // exclude
    substring(str, output, index + 1, ans);
}
int main()
{
    vector<string> ans;
    substring("sugam", "", 0, ans);
    for (auto c : ans)
    {
        cout << c << endl;
    }
    cout << (3 ^ 4) << endl;
    return 0;
}