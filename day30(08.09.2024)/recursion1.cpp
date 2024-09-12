#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int getfact = fact(n - 1);
    int result = n * getfact;
    return result;
}
void count(int n)
{
    if (n == 0)
    {
        return;
    }
    count(n - 1);
    cout << n << " ";
}
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibonacci(n - 2) + fibonacci(n - 1);
}
int getsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + getsum(n - 1);
}
int main()
{
    // int n;
    // cin >> n;

    cout << getsum(5) << endl;
    // cout << fibonacci(7) << endl;
    // cout << power(2,5) << endl;
    // cout << fact(n) << endl;
    // count(n);
    return 0;
}