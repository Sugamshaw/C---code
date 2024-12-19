#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void subarray(string str, int s, int e)
{
    int n = str.length();
    // base case
    if (s == n)
    {
        return;
    }
    // calculation
    for (int i = s; i <= e; i++)
    {
        cout << str[i];
        if (i == e)
            cout << endl;
    }

    if (e == n - 1)
    {
        e = -1;
        s += 1;
    }
    // recursive call
    subarray(str, s, e + 1);
}
int main() 
{
    string s = "12345";
    int n = s.length();
    subarray(s, 0, 0);
    return 0;
}