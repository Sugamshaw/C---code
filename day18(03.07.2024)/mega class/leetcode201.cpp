#include <iostream>
using namespace std;
int func()
{
}

int rangeBitwiseAnd(int left, int right)
{
    int i, ans = left;
    for (i = left+1; i <= right; i++)
    {
        ans = (ans & i);
    }
    return ans;
}
int main()
{
    cout << rangeBitwiseAnd(5, 7) << endl;
    // cout << (5 & 6 & 7) << endl;
    return 0;
}