#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Function to check if we have at least one of each vowel
bool hasAllVowels(unordered_map<char, int> &vowelCount)
{
    return vowelCount['a'] >= 1 && vowelCount['e'] >= 1 &&
           vowelCount['i'] >= 1 && vowelCount['o'] >= 1 &&
           vowelCount['u'] >= 1;
}

int countOfSubstrings(string word, int k)
{
    int len = word.length();
    int ans = 0;
    int start = 0;
    unordered_map<char, int> vowelCount; // To count occurrences of vowels
    int consonantCount = 0;              // To keep track of the number of consonants in the current window

    for (int end = 0; end < len; ++end)
    {
        char ch = word[end];

        // Update the vowel and consonant counts
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCount[ch]++;
        }
        else
        {
            consonantCount++;
        }

        // Shrink the window from the start if we have more than k consonants
        while (consonantCount > k)
        {
            char startChar = word[start];
            if (startChar == 'a' || startChar == 'e' || startChar == 'i' || startChar == 'o' || startChar == 'u')
            {
                vowelCount[startChar]--;
            }
            else
            {
                consonantCount--;
            }
            start++;
        }

        // If we have all vowels at least once and exactly k consonants, count the valid substrings
        if (hasAllVowels(vowelCount))
        {
            ans += (end - start + 1); // Add valid substrings within the current window
        }
    }

    return ans;
}
int main()
{
    // cout << kthCharacter(5) << endl;
    cout << countOfSubstrings("eauiuo", 0) << endl;
    cout << countOfSubstrings("aeioqq", 1) << endl;
    cout << countOfSubstrings("aeiou", 0) << endl;
    cout << countOfSubstrings("ieaouqqieaouqq", 1) << endl;
    ;
    return 0;
}