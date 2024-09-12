#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;
vector<bool> sieve(long long n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (long long j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}

long long primeProduct(long long L, long long R)
{
    vector<bool> val = sieve(sqrt(R));
    vector<int> baseprime;
    for (int i = 0; i < val.size(); i++)
    {
        if (val[i])
        {
            baseprime.push_back(i);
        }
    }

    vector<bool> sseive(R - L + 1, true);
    if (L == 0)
    {
        sseive[0] = false;
        if (R >= 1)
        {
            sseive[1] = false;
        }
    }
    else if (L == 1)
    {
        sseive[0] = false;
    }
    for (int i = 0; i < baseprime.size(); i++)
    {
        int firstmul = (L / baseprime[i]) * baseprime[i];
        if (firstmul < L)
        {
            firstmul = firstmul + baseprime[i];
        }
        if (firstmul == baseprime[i]) firstmul += baseprime[i];
        for (int j = max(firstmul, baseprime[i] * baseprime[i]); j <= R; j += baseprime[i])
        {
            sseive[j - L] = false;
        }
    }
    long long p = 1;
    for (int i = 0; i < sseive.size(); i++)
    {
        if (sseive[i])
        {
            p = (p*(i + L))%1000000007 ;
        }
    }
    return p%1000000007;
}
int main()
{
    long long l = 18468, r = 18510;
    long long v = primeProduct(l, r);

    cout << v << endl;

    return 0;
}