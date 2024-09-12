#include <iostream>
#include <string>
using namespace std;
bool ispalindrome(string str)
{
    int s = 0, e = str.length() - 1;
    while (s < e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int countSubstrings(string str)
{

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            string substring = str.substr(i, j - i + 1);
            cout << substring << endl;
            if (ispalindrome(substring))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    string str = "abc";
    cout << countSubstrings(str) << endl;
    return 0;
}
