#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string func1(string str)
{
    string ans = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (ans == "")
        {
            ans += str[i];
        }
        else
        {
            if (ans[ans.length() - 1] == str[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(str[i]);
            }
        }
    }
    return ans;
}

string func2(string str, int k)
{
    string ans = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (ans == "")
        {
            ans += str[i];
        }
        else if (ans.length() >= k - 1)
        {
            int count = 0;
            for (int j = 1; j < k; j++)
            {
                if (ans[ans.length() - j] == str[i])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count == k - 1)
            {
                ans.erase(ans.length() - k + 1);
            }
            else
            {
                ans.push_back(str[i]);
            }
        }
        else
        {
            ans.push_back(str[i]);
        }
    }
    return ans;
}

string func3(string str, string str2)
{
    int pos = 0;
    while (str.find(str2) != -1)
    {
        cout << "1. ->" << str << endl;
        pos = str.find(str2);
        str.erase(pos, str2.length());
        cout << "2. ->" << str << " " << pos << endl;
    }
    return str;
}
int main()
{
    string str = "daabcbaabcbc";
    string str2 = "abc";
    reverse(str.begin(), str.end());
    cout<< str << endl;

    // cout << str.substr(str.length());
    // str.erase(2, 3);
    // int k = 3;
    // string ans = func3(str, str2);
    // cout << ans;
    // return 0;
}