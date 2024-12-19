#include <vector>
#include <iostream>

using namespace std;

// Efficient modular exponentiation
int power_mod(int base, int exp, int mod)
{
    int result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1) result = (1LL * result * base) % mod;
        base = (1LL * base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// Calculate f(x) mod p
int f(int x, const vector<int> &a, const vector<int> &b, int p)
{
    int result = 0;
    for (int i = 0; i < a.size(); i++)
    {
        result = (result + 1LL * a[i] * power_mod(x, b[i], p)) % p;
    }
    return result;
}

// Apply f m times
int f_m(int m, int x, const vector<int> &a, const vector<int> &b, int p)
{
    for (int i = 0; i < m; i++)
    {
        x = f(x, a, b, p);
    }
    return x;
}

// Process queries
vector<int> answerQueries(int p, vector<int> a, vector<int> b, const vector<vector<int>> &queries)
{
    vector<int> answers;
    for (const auto &query : queries)
    {
        answers.push_back(f_m(query[0], query[1], a, b, p));
    }
    return answers;
}

int main()
{
    int p = 71;
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {0, 1, 2, 3};
    vector<vector<int>> queries = {{1, 2}};

    vector<int> answers = answerQueries(p, a, b, queries);

    for (int answer : answers)
    {
        cout << answer << endl;
    }

    return 0;
}
