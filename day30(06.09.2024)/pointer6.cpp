#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int func()
{
}
int main()
{
    int a = 32, *ptr = &a;
    char ch = 'a';
    char &c = ch;
    c += a;
    *ptr += ch;
    cout << a << " " << ch << endl;
    return 0;
}