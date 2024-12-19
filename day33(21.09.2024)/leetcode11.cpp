#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
char kthCharacter(int k)
{
    string word = "a";
    string ans = "a";
    int length = 1;
    while (ans.length() < k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = word[i] + 1;
        }
        ans += word;
        word = ans;
        // cout << word << " " << ans << endl;
    }
    return ans[k - 1];
}
int countOfSubstrings(string word, int k)
{
    int len = word.length();
    int ans = 0;
    for (int i = 0; i < len; i++)
    {

        int a = 0, e = 0, ii = 0, o = 0, u = 0;
        int con = 0;
        for (int j = i; j < len; j++)
        {
            char ch = word[j];
            // cout << ch;
            if (ch == 'a')
            {
                a++;
            }
            else if (ch == 'e')
            {
                e++;
            }
            else if (ch == 'i')
            {
                ii++;
            }
            else if (ch == 'o')
            {
                o++;
            }
            else if (ch == 'u')
            {
                u++;
            }
            else
            {
                con++;
            }
            if (a >= 1 && e >= 1 && ii >= 1 && o >= 1 && u >= 1 && con == k)
            {
                ans++;
            }
        }
        // cout << " " << a + e + ii + o + u << " " << con << endl;
    }
    return ans;
}
int main()
{
    // cout << kthCharacter(5) << endl;
    cout << countOfSubstrings("eauiuo", 0) << endl;
    cout << countOfSubstrings("aeioqq", 1) << endl;
    cout << countOfSubstrings("aeiou", 0) << endl;
    cout << countOfSubstrings("ieaouqqieaouqq", 1) << endl;
    ;
    return 0;
}