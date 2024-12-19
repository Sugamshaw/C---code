#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    long long validSubstringCount(string word1, string word2)
    {
        int len1 = word1.length(), len2 = word2.length();
        if (len1 < len2)
            return 0;

        unordered_map<char, int> word2Freq;
        for (char c : word2)
        {
            word2Freq[c]++;
        }

        long long validCount = 0;
        unordered_map<char, int> windowFreq;

        // Iterate over all starting points for substrings in word1
        for (int start = 0; start < len1; start++)
        {
            windowFreq.clear(); // Clear the window frequency map for each new start

            // Expand the window to check all substrings starting at 'start'
            for (int end = start; end < len1; end++)
            {
                windowFreq[word1[end]]++;

                // Only check when the window size is at least len2
                if (end - start + 1 >= len2)
                {
                    bool isValid = true;
                    for (const auto &[ch, count] : word2Freq)
                    {
                        if (windowFreq[ch] < count)
                        {
                            isValid = false;
                            break;
                        }
                    }
                    if (isValid)
                    {
                        validCount++;
                    }
                }
            }
        }

        return validCount;
    }
};

int main()
{
    Solution solution;

    string word1 = "bcca";
    string word2 = "abc";
    cout << solution.validSubstringCount(word1, word2) << endl; // Output: 1

    word1 = "abcabc";
    word2 = "abc";
    cout << solution.validSubstringCount(word1, word2) << endl; // Output: 10

    word1 = "abcabc";
    word2 = "aaabc";
    cout << solution.validSubstringCount(word1, word2) << endl; // Output: 0

    return 0;
}
