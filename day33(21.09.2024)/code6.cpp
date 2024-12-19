#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool palindrome(string str, int s, int e)
{
    if(s>=e)
    {
        return true;
    }
    if(str[s]!=str[e])
    {
        return false;
    }
    return palindrome(str,s+1,e-1);
} 
int main()
{
    string s = "sugam";
    cout << palindrome(s, 0, s.length() - 1) << endl;
    s = "madam";
    cout << palindrome(s, 0, s.length() - 1) << endl;
    s = "ssodoss";
    cout << palindrome(s, 0, s.length() - 1) << endl;
    return 0;
}