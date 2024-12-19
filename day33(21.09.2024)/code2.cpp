#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cstring>
using namespace std;
void occurncelr(string s, char c, int index, int &ans)
{
    if (index == s.length())
    {
        return;
    }
    if (s[index] == c)
    {
        ans = index;
    }
    occurncelr(s, c, index + 1, ans);
}
void occurncerl(string s, char c, int index, int &ans)
{
    if (index < 0)
    {
        return;
    }
    if (s[index] == c)
    {
        ans = index;
        return;
    }
    occurncerl(s, c, index - 1, ans);
}
int main()
{
    int ans = -1;
    string s = "abcabcabc";
    char c = 'b';
    occurncelr(s, c, 0, ans);
    cout << ans << endl;
    cout << s.find(c) << endl;
    cout << strchr(*s,c) << endl;

    ans = -1;
    occurncerl(s, c, s.length() - 1, ans);
    cout << ans << endl;

    return 0;
}