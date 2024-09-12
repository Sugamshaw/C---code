#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "dada";
    string str2 = "ddda";
    reverse(str.begin(), str.end());
    cout << str << endl;
    
    return 0;
}