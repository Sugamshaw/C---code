#include <iostream>
using namespace std;
double sqrt(int val, double point)
{
    double s = 0, ans = 0.0, e = val;
    while ((e - s) >= point)
    {
        printf("s= %.9f,e= %.9f\n", s, e);
        double mid = s + (e - s) / 2;
        if (mid * mid <= val)
        {
            ans = mid;
            s = mid;
        }
        else
        {
            e = mid;
        }
    }
    return ans;
}
int main()
{
    int val = 63;
    double point = 0.000000001;
    printf("ans: %.9f", sqrt(val, point));
    return 0;
}