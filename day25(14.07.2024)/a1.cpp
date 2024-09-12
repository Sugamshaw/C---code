#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{

    vector<string> ans;
    for (int i = 0; i < words.size(); i++)
    {
        string tobecheck = words[i];
        int count = 0;
        unordered_map<char, char> m;
        if (pattern.length() != tobecheck.length())
        {
            continue;
        }
        for (int j = 0; j < pattern.length(); j++)
        {
            if (m.find(pattern[j]) == m.end())
            {
                m[pattern[j]] = tobecheck[j];
            }
            else
            {
                cout << m[pattern[j]] << endl;
                if (m[pattern[j]] != tobecheck[j])
                {
                    count = 1;
                    break;
                }
            }
        }
        if (count == 0)
        {
            ans.push_back(tobecheck);
        }
    }
    return ans;
}
int main()
{
    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    // vector<string> words = {"abc"};
    string str = "abb";
    vector<string> ans = findAndReplacePattern(words, str);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}