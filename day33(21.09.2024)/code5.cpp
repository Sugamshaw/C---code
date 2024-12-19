#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void reverse(string &s, int index)
{
    if (index == (s.length() / 2) + 1)
    {
        return;
    }
    swap(s[index], s[s.length() - 1 - index]);
    reverse(s, index + 1);
}
int main()
{
    // string s = "sugam";
    string s = "shaw";
    int index = 0;
    reverse(s, index);
    cout << s << endl;
    return 0;
}