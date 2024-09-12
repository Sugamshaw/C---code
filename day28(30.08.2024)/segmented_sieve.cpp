#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;
vector<bool> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
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
    vector<bool> primes = sieve(sqrt(r));
    vector<int> baseprime;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i])
        {
            baseprime.push_back(i);
        }
    }
    vector<bool> sseive(r - l + 1, true);
    if (l == 0) {
        sseive[0] = false; // 0 is not a prime number
        if (r >= 1) sseive[1] = false; // 1 is not a prime number
    } else if (l == 1) {
        sseive[0] = false; // 1 is not a prime number
    }

    for (int i = 0; i < baseprime.size(); i++)
    {
        int firstmul = (l / baseprime[i]) * baseprime[i];
        if (firstmul < l)
        {
            firstmul += baseprime[i];
        }
        for (int j = max(firstmul, baseprime[i] * baseprime[i]); j <= r; j += baseprime[i])
        {
            sseive[j - l] = false;
        }
    }
    return sseive;
}

int main()
{
    vector<bool> v = segmented_sieve(1, 10);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i])
        {
            cout << i+1 << endl;
        }
    }
    return 0;
}