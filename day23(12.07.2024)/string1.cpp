#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string str, int s, int e)
{
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
bool validPalindrome(string str)
{
    int s = 0, e = str.length() - 1;

    while (s <= e)
    {
        if (str[s] == str[e])
        {
            s++;
            e--;
        }
        else
        {
            bool ansone = checkPalindrome(str, s + 1, e);
            bool twoone = checkPalindrome(str, s, e - 1);
            return ansone || twoone;
        }
    }
    return true;
}
int main()
{
    string str = "cbbcc";
    cout << validPalindrome(str) << endl;
    return 0;
}