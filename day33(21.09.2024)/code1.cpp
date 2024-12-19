#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool reportSpam(vector<string> &message, vector<string> &bannedWords)
{
    unordered_map<string, int> m;

    // Count occurrences of words in the message
    for (auto i : message)
    {
        m[i]++;
    }

    int match = 0;

    // Check for banned words in the message
    for (int i = 0; i < bannedWords.size(); i++)
    {
        if (m[bannedWords[i]])
        {
            match += m[bannedWords[i]];
            m[bannedWords[i]] = 0;
        }
    }

    // Return true if at least 2 banned words are found
    return (match >= 2) ? true : false;
}

int main()
{
    // Create message and bannedWords vectors
    vector<string> message = {"hello", "world", "leetcode"};
    vector<string> bannedWords = {"world", "hello"};

    // Call the function and output the result
    cout << reportSpam(message, bannedWords) << endl;

    // Create message and bannedWords vectors
    message = {"l", "i", "l", "i", "l"};
    bannedWords = {"d", "a", "i", "v", "a"};

    // Call the function and output the result
    cout << reportSpam(message, bannedWords) << endl;

    return 0;
}
