#include <vector>
#include <string>
#include <climits>
#include <iostream>
#include <queue>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    TrieNode() {}
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }

    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
    }
};

class Solution {
public:
    int minValidStrings(vector<string>& words, string target) {
        Trie trie;
        for (const string& word : words) {
            for (int len = 1; len <= word.length(); ++len) {
                trie.insert(word.substr(0, len));
            }
        }
        
        int n = target.length();
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;

        queue<int> q;
        q.push(0);

        while (!q.empty()) {
            int start = q.front();
            q.pop();

            if (dp[start] == INT_MAX) continue;

            TrieNode* node = trie.root;
            for (int i = start; i < n; ++i) {
                if (node->children.find(target[i]) == node->children.end()) break;
                node = node->children[target[i]];

                if (dp[i + 1] > dp[start] + 1) {
                    dp[i + 1] = dp[start] + 1;
                    q.push(i + 1);
                }
            }
        }

        return dp[n] == INT_MAX ? -1 : dp[n];
    }
};

int main() {
    Solution sol;
    vector<string> words = {"abc", "aaaaa", "bcdef"};
    string target = "aabcdabc";
    
    int result = sol.minValidStrings(words, target);
    cout << result << endl;

    return 0;
}
