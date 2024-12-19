#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void subarray(string str, int s, int e)
{
    if (s == str.length())
    {
        return;
    }
    for (int i = s; i <= e; i++)
    {
        cout << str[i];
        if (i == e)
        {
            cout << endl;
        }
    }
    if (e == (str.length()-1))
    {
        e=-1;
        s=s+1;
    }
    subarray(str, s, e + 1);
}
int main()
{
    string s = "12345";
    subarray(s, 0, 0);
    return 0;
}