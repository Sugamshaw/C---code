#include <iostream>
#include <vector>
#include <string>
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
            if (!m[tobecheck[j]])
            {
                m[pattern[j]] = tobecheck[j];
            }
            else
            {
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
    vector<string> str={"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";
    vector<string> ans=findAndReplacePattern(str,pattern);
    for(auto i:ans)
    {
        cout<<i<<endl;
    }
    return 0;
}