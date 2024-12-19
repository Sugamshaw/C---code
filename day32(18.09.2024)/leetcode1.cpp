#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;

// Helper function to count words from a sentence
void countWords(const string& sentence, unordered_map<string, int>& wordCount) {
    stringstream ss(sentence);
    string word;
    while (ss >> word) {
        wordCount[word]++;
    }
}

vector<string> uncommonFromSentences(string s1, string s2) {
    unordered_map<string, int> wordCount;

    // Count words in the first sentence
    countWords(s1, wordCount);

    // Count words in the second sentence
    countWords(s2, wordCount);

    // Find uncommon words
    vector<string> result;
    for (const auto& entry : wordCount) {
        if (entry.second == 1) {
            result.push_back(entry.first);
        }
    }

    return result;
}

int main() {
    // Example 1
    string s1 = "this apple is sweet";
    string s2 = "this apple is sour";
    vector<string> result = uncommonFromSentences(s1, s2);

    // Output the result
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;  // Output: "sweet sour"

    // Example 2
    s1 = "apple apple";
    s2 = "banana";
    result = uncommonFromSentences(s1, s2);

    // Output the result
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;  // Output: "banana"

    return 0;
}
