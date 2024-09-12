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
    int a = 2;
    int b = 5;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "fdf: " << ans;
    return 0;
}