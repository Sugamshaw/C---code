#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
string normalize(string s)
{
    unordered_map<char, char> m;
    char ch = 'a';
    int i = 0, e = s.length();
    while (ch >= 'a' && ch <= 'z' && i < e)
    {

        if (m.find(s[i]) == m.end())
        {
            m[s[i]] = ch;
            ch++;
        }
        i++;
    }
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        ans.push_back(m[s[i]]);
    }
    return ans;
}
vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{

    string new_pattern = normalize(pattern);
    // cout << "New pattern : " << new_pattern << endl;
    vector<string> ans;
    for (auto i : words)
    {
        string new_word = normalize(i);
        if (new_word.compare(new_pattern) == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    vector<string> str = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    vector<string> ans = findAndReplacePattern(str, pattern);
    for (auto i : ans)
    {
        cout << i << endl;
    }

    // cout << normalize("suuhm") << endl;
    return 0;
}