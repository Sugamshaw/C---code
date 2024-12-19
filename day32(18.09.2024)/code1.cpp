#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int changeSum(int n, int x, vector<int>& a) {
    // Compute the current sum of the array
    int current_sum = 0;
    for (int num : a) {
        current_sum += num;
    }
    
    // Calculate the difference we need to reduce
    int diff = current_sum - x;
    
    // If no reduction is needed, return 0
    if (diff == 0) {
        return 0;
    }
    
    // Sort the array in descending order
    sort(a.rbegin(), a.rend());
    
    // Apply the operations to reduce the difference
    int operations = 0;
    for (int num : a) {
        if (diff <= 0) break; // Stop if the required reduction is met
        diff -= num;
        operations++;
    }
    
    // Check if we have managed to reduce the difference to zero or less
    if (diff <= 0) {
        return operations;
    }
    
    // Return -1 if it's not possible to achieve the target sum
    return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << changeSum(N, X, A) << endl;
    }
    return 0;
}
