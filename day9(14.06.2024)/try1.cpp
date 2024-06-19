#include <bits/stdc++.h>
using namespace std;

int getPowerOfTwo(int n)
{
    if (n <= 0 || (n & (n - 1)) != 0)
    {
        return -1; // n is not a power of 2
    }
    int power = 0;
    while (n > 1)
    {
        n >>= 1;
        ++power;
        cout << n << endl;
    }
    return power;
}
int main()
{
    // your code goes here
    int n;
    cin >> n;
    int ans=getPowerOfTwo(n);
    cout << "power: " << ans << endl;
}
