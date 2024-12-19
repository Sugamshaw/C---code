#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform DFS and calculate subtree XORs
void dfs(int node, int parent, const vector<vector<int>>& adj_list, const vector<int>& weights, vector<int>& subtree_xor) {
    subtree_xor[node] = weights[node];
    for (int neighbor : adj_list[node]) {
        if (neighbor != parent) {
            dfs(neighbor, node, adj_list, weights, subtree_xor);
            subtree_xor[node] ^= subtree_xor[neighbor];
        }
    }
}

// Function to solve the problem
int solve(int n, vector<int>& a, vector<vector<int>>& edges) {
    // Create adjacency list for the tree
    vector<vector<int>> adj_list(n + 1);
    for (const vector<int>& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    
    // Vector to store XOR of weights for each subtree
    vector<int> subtree_xor(n + 1, 0);
    
    // Perform DFS to calculate subtree XOR values
    dfs(1, -1, adj_list, a, subtree_xor);
    
    // Calculate total XOR of the entire tree
    int total_xor = subtree_xor[1];
    
    // Initialize maximum AND value
    int max_and = 0;
    
    // Calculate maximum AND value by checking each edge
    for (const vector<int>& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        
        // Ensure u is the parent of v (in terms of subtree_xor)
        if (subtree_xor[v] > subtree_xor[u]) {
            swap(u, v);
        }
        
        // XOR values of the two resulting subtrees
        int xor1 = subtree_xor[v];
        int xor2 = total_xor ^ xor1;
        
        // Update maximum AND value
        max_and = max(max_and, xor1 & xor2);
    }
    
    return max_and;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n + 1); // 1-based indexing, so size n+1
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    
    vector<vector<int>> edges;
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    
    cout << solve(n, a, edges) << endl;
    
    return 0;
}
