#include <iostream>
using namespace std;
int quotient(int divisor, int dividend)
{
    int s = 0, e = dividend;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + ((e - s) >> 1);
        if (divisor * mid == dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int dividend = 10;
    int divisor = 3;
    int ans = quotient(abs(divisor), abs(dividend));

    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        ans = ans * -1;
    }
    cout << "answer:  " << ans << endl;
    return 0;
}
