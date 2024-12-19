#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
        int len1 = word1.length(), len2 = word2.length();
        if (len1 < len2) return 0;

        unordered_map<char, int> word2Freq;
        for (char c : word2) {
            word2Freq[c]++;
        }

        unordered_map<char, int> windowFreq;
        int left = 0, right = 0;
        long long validCount = 0;
        int requiredChars = word2Freq.size();
        int formedChars = 0;

        while (right < len1) {
            char rightChar = word1[right];
            windowFreq[rightChar]++;

            if (word2Freq.find(rightChar) != word2Freq.end() &&
                windowFreq[rightChar] == word2Freq[rightChar]) {
                formedChars++;
            }

            while (left <= right && formedChars == requiredChars) {
                // All characters in the window are valid
                validCount += (len1 - right); // Count all valid substrings starting from left

                char leftChar = word1[left];
                windowFreq[leftChar]--;

                if (word2Freq.find(leftChar) != word2Freq.end() &&
                    windowFreq[leftChar] < word2Freq[leftChar]) {
                    formedChars--;
                }

                left++;
            }

            right++;
        }

        return validCount;
    }
};

int main() {
    Solution solution;

    string word1 = "bcca";
    string word2 = "abc";
    cout << solution.validSubstringCount(word1, word2) << endl;  // Output: 1

    word1 = "abcabc";
    word2 = "abc";
    cout << solution.validSubstringCount(word1, word2) << endl;  // Output: 10

    word1 = "abcabc";
    word2 = "aaabc";
    cout << solution.validSubstringCount(word1, word2) << endl;  // Output: 0

    return 0;
}
