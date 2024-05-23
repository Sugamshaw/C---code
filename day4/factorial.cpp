#include <iostream>
using namespace std;
long long int factorial(int n)
{
    long long int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    cout << factorial(16);
    return 0;
}