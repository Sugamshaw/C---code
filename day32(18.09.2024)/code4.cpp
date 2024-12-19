#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int changedArray(vector<int> arr, int n) {
    unordered_set<int> elements;
    int count = 0;

    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    for (int num : arr) {
        // If the current number is not in the set, it could be an original number
        if (elements.find(num) == elements.end()) {
            // Check if its half exists in the set
            if (num % 2 == 0 && elements.find(num / 2) != elements.end()) {
                count++;
            }
            // Add the current number to the set
            elements.insert(num);
        } else {
            // If the number is already in the set, it must be a doubled number
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr1 = {2, 5, 2, 3, 5, 4, 8};
    vector<int> arr2 = {2, 5, 2, 3, 5, 4, 8, 4, 2};
    
    cout << "Output 1: " << changedArray(arr1, arr1.size()) << endl;  // Expected Output: 4
    cout << "Output 2: " << changedArray(arr2, arr2.size()) << endl;  // Expected Output: 6
    
    return 0;
}