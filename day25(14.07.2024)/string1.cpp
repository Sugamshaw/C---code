#include <iostream>
#include <vector>
#include <string>
using namespace std;
string getSmallestString(string s)
{
    int n = s.size();

    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] % 2) == (s[i + 1] % 2))
        {
            if (s[i] > s[i + 1])
            {
                swap(s[i], s[i + 1]);
                break;
            }
        }
    }
    return s;
}
int main()
{

    cout << getSmallestString("45320") << endl;

    return 0;
}