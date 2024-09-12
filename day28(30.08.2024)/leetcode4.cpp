#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

const int MAX_BIT = 32;

// Trie Node
struct TrieNode
{
    TrieNode *children[2];
    TrieNode()
    {
        children[0] = children[1] = nullptr;
    }
};

// Insert number into Trie
void insert(TrieNode *root, int num)
{
    TrieNode *node = root;
    for (int i = MAX_BIT - 1; i >= 0; --i)
    {
        int bit = (num >> i) & 1;
        if (node->children[bit] == nullptr)
        {
            node->children[bit] = new TrieNode();
        }
        node = node->children[bit];
    }
}

// Find maximum XOR for the given number
int findMaxXor(TrieNode *root, int num)
{
    TrieNode *node = root;
    int maxXor = 0;
    for (int i = MAX_BIT - 1; i >= 0; --i)
    {
        int bit = (num >> i) & 1;
        if (node->children[1 - bit] != nullptr)
        {
            maxXor |= (1 << i);
            node = node->children[1 - bit];
        }
        else
        {
            node = node->children[bit];
        }
    }
    return maxXor;
}

vector<int> findMaxXorScore(const vector<int> &nums, const vector<vector<int>> &queries)
{
    vector<int> results;
    int n = nums.size();

    // Precompute prefix XOR
    vector<int> prefixXor(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefixXor[i + 1] = prefixXor[i] ^ nums[i];
    }

    for (const auto &query : queries)
    {
        int li = query[0];
        int ri = query[1];

        TrieNode *root = new TrieNode();
        int maxScore = INT_MIN;

        // Insert prefix XORs into Trie and find max XOR in the range
        for (int i = li; i <= ri; ++i)
        {
            insert(root, prefixXor[i]);
            maxScore = max(maxScore, findMaxXor(root, prefixXor[i + 1]));
        }

        results.push_back(maxScore);

        // Clean up Trie
        // (In practice, you would need to delete the nodes to prevent memory leaks)
    }

    return results;
}

int main()
{
    vector<int> nums1 = {2, 8, 4, 32, 16, 1};
    vector<vector<int>> queries1 = {{0, 2}, {1, 4}, {0, 5}};
    vector<int> result1 = findMaxXorScore(nums1, queries1);

    cout << "Output for first set of queries: ";
    for (int score : result1)
    {
        cout << score << " ";
    }
    cout << endl;

    vector<int> nums2 = {0, 7, 3, 2, 8, 5, 1};
    vector<vector<int>> queries2 = {{0, 3}, {1, 5}, {2, 4}, {2, 6}, {5, 6}};
    vector<int> result2 = findMaxXorScore(nums2, queries2);

    cout << "Output for second set of queries: ";
    for (int score : result2)
    {
        cout << score << " ";
    }
    cout << endl;

    return 0;
}
