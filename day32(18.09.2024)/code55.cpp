#include <vector>
#include <iostream>

using namespace std;

// Function to process queries
vector<int> answerQueries(int n, int q, int p, vector<int> a, vector<int> b, vector<vector<int>> queries)
{
    // Write your code here.
    auto power_mod = [](int base, int exp, int mod)
    {
        int result = 1;
        base %= mod;
        while (exp > 0)
        {
            if (exp & 1)
                result = (1LL * result * base) % mod;
            base = (1LL * base * base) % mod;
            exp >>= 1;
        }
        return result;
    };

    auto f = [&](int x)
    {
        int result = 0;
        for (int i = 0; i < a.size(); i++)
        {
            result = (result + 1LL * a[i] * power_mod(x, b[i], p)) % p;
        }
        return result;
    };

    auto f_m = [&](int m, int x)
    {
        for (int i = 0; i < m; i++)
        {
            x = f(x);
        }
        return x;
    };

    vector<int> answer;
    for (const auto &query : queries)
    {
        int m = query[0];
        int x = query[1];
        answer.push_back(f_m(m, x));
    }
    return answer;
}
int main() {
    // Example hardcoded values
    int T = 2; // Number of test cases
    
    // Test case 1
    int n1 = 4;
    int p1 = 73;
    int q1 = 2;
    vector<int> a1 = {3, 2, 6, 1};
    vector<int> b1 = {1, 3, 6, 1};
    vector<vector<int>> queries1 = {{1, 1}, {2, 2}};
    
    // Test case 2
    int n2 = 3;
    int p2 = 37;
    int q2 = 1;
    vector<int> a2 = {4, 5, 6};
    vector<int> b2 = {1, 2, 3};
    vector<vector<int>> queries2 = {{2, 7}};
    
    // Process and output results for test case 1
    vector<int> answers1 = answerQueries(n1, p1, q1, a1, b1, queries1);
    cout << "Test Case 1 Results:" << endl;
    for (int answer : answers1) {
        cout << answer << endl;
    }
    
    // Process and output results for test case 2
    vector<int> answers2 = answerQueries(n2, p2, q2, a2, b2, queries2);
    cout << "Test Case 2 Results:" << endl;
    for (int answer : answers2) {
        cout << answer << endl;
    }
    
    return 0;
}
