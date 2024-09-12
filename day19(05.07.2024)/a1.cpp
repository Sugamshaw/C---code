#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
string getEncryptedString(string s, int k)
{

    string encryptedString = "";
    int n = s.length();

    for (int i = 0; i < n; ++i)
    {
        int newIndex = (i + k) % n;
        encryptedString += s[newIndex];
    }

    return encryptedString;
}

int main()
{
    cout << getEncryptedString("dart", 2) << endl; // trad
    cout << strlen("sugam") << endl;
}