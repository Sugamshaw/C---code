#include <iostream>
using namespace std;
int func()
{
}
int main()
{
    int a = 20, b = 6, res = 0;
    while (b > 0)
    {
        // if (b & 1)
        // {
        //     res = res + a;
        // }
        // a = a << 1;
        // b = b >> 1;
        if(b%2==1)
        {
            res+=a;
        }
        a*=2;
        b/=2;
    }
    cout << res << endl;
    return 0;
}