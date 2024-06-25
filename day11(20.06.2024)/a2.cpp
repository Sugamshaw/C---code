#include <iostream>
#include <vector>

using namespace std;

int lastElement(int N, int K) {
    // Initialize a 2D DP table with dimensions (N, N+1)
    vector<vector<long long>> dp(N, vector<long long>(N + 1, 0));
    
    // Base case: 1 way to leave the last chocolate if there's only one chocolate left
    for (int j = 1; j <= N; ++j) {
        dp[0][j] = 1;
    }
    
    // Fill the dp table
    for (int i = 1; i < N; ++i) {
        for (int j = 1; j <= N; ++j) {
            dp[i][j] = 0;
            if (j > 1) dp[i][j] += dp[i - 1][j - 1]; // Tails: remove from the end
            if (j < N) dp[i][j] += dp[i - 1][j + 1]; // Heads: remove from the beginning
        }
    }
    
    // The result is dp[N-1][K]
    return dp[N - 1][K];
}

int main() {
    int N = 5;
    int K = 1;
    cout << lastElement(N, K) << endl; // Output: 2
    
    return 0;
}
