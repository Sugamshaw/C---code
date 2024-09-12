#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;
int fastexp(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return ans;
}
int count_prime(int n)
{
    int cnt = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = 2 * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return cnt;
}
vector<bool> seive(int n)
{
    int cnt = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = 2 * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}
vector<bool> seive_optimize(int n)
{
    int cnt = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}
vector<bool> segmented_sieve(int l, int r)
{
    vector<bool> sieve = seive_optimize(sqrt(r));
    vector<int> baseprime;
    for (int i = 0; i <= sieve.size(); i++)
    {
        if (sieve[i])
        {
            baseprime.push_back(i);
        }
    }
    vector<bool> segsieve(r - l + 1, true);
    if (l == 1 || l == 0)
    {
        segsieve[l] = false;
    }
    for (auto prime : baseprime)
    {
        int first_fac = (l / prime) * prime;
        if (first_fac < l)
        {
            first_fac += prime;
        }
        int j = max(first_fac, prime * prime);
        for (; j <= r; j += prime)
        {
            segsieve[j - l] = false;
        }
    }
    return segsieve;
}
long long primeProduct(long long L, long long R)
{
    // code here
    long long ans = 1;
    vector<bool> prime = segmented_sieve(L, R);
    for (int i = 0; i < prime.size(); i++)
    {
        if (prime[i])
        {
            cout << i + L << endl;
            ans = (ans * (i + L)) % 1000000007;
        }
    }
    return ans;
}
int main()
{
    cout << primeProduct(1, 10) << endl;
    // int a = 2;
    // int b = 5;

    // cout << "fastexp: " << fastexp(a, b);
    // cout << "count_prime: " << count_prime(11);
    cout << "Segmented sieve" << endl;
    vector<bool> v = segmented_sieve(1, 10);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i])
        {
            cout << i + 1 << "\n";
        }
    }
    // cout<<"Sieve"<<endl;
    // vector<bool> v1 = seive_optimize(130);
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     if (v1[i])
    //     {
    //         cout << i  << "\n";
    //     }
    // }
    return 0;
}