#include <iostream>
#include <vector>

const long long MOD = 1e9 + 7;

// Function to compute modular inverse using Fermat's Little Theorem
long long modInverse(long long x, long long mod) {
    long long result = 1;
    long long power = mod - 2;
    while (power) {
        if (power & 1) result = result * x % mod;
        x = x * x % mod;
        power >>= 1;
    }
    return result;
}

// Function to calculate binomial coefficient C(n, k) % MOD
long long binomialCoefficient(long long n, long long k, long long mod) {
    if (k > n) return 0;
    std::vector<long long> fact(n + 1, 1);
    std::vector<long long> invFact(n + 1, 1);
    for (long long i = 2; i <= n; ++i) {
        fact[i] = fact[i - 1] * i % mod;
    }
    invFact[n] = modInverse(fact[n], mod);
    for (long long i = n - 1; i >= 1; --i) {
        invFact[i] = invFact[i + 1] * (i + 1) % mod;
    }
    return fact[n] * invFact[k] % mod * invFact[n - k] % mod;
}

long long probabilityOfreaching(long long n, long long m, long long w, long long x, long long y, long long z) {
    std::vector<std::vector<long long>> dp(n, std::vector<long long>(m, 0));
    dp[0][0] = 1; // Starting point

    // Fill the DP table
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < m; ++j) {
            if (i == w && j == x) continue; // Forbidden cell
            if (i > 0) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if (j > 0) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
        }
    }

    long long valid_paths = dp[n - 1][m - 1];
    long long total_possible_paths = binomialCoefficient(n + m - 2, n - 1, MOD);
    
    long long p = valid_paths;
    long long q = total_possible_paths;
    long long inv_q = modInverse(q, MOD);
    
    return p * inv_q % MOD;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        long long N, M, W, X, Y, Z;
        std::cin >> N >> M >> W >> X >> Y >> Z;
        std::cout << probabilityOfreaching(N, M, W, X, Y, Z) << std::endl;
    }
    return 0;
}
