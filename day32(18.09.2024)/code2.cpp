#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int longestSubarrayOr(const vector<int>& arr) {
    int n = arr.size();
    unordered_set<int> elementSet(arr.begin(), arr.end());
    
    int maxLength = 0;
    
    for (int start = 0; start < n; ++start) {
        int currentOR = 0;
        for (int end = start; end < n; ++end) {
            currentOR |= arr[end];
            if (elementSet.find(currentOR) != elementSet.end()) {
                maxLength = max(maxLength, end - start + 1);
            }
        }
    }
    
    return maxLength;
}

int main() {
    vector<int> arr = {4,9,5, 2, 13, 11, 3,5};  // Example input
    cout << longestSubarrayOr(arr) << endl;  // Output: 3

    vector<int> arr2 = {12, 43, 29, 5, 392, 393, 432, 123};  // Example input
    cout << longestSubarrayOr(arr2) << endl;  // Output: 2

    return 0;
}
