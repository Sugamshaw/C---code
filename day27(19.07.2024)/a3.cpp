#include <vector>
#include <queue>
#include <climits>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>> &queries)
    {
        vector<vector<int>> graph(n);
        vector<int> ans;

        // Initialize the graph with initial roads
        for (int i = 0; i < n - 1; ++i)
        {
            graph[i].push_back(i + 1);
        }

        // BFS to find the shortest path from 0 to n-1
        auto bfs = [&](int start, int end)
        {
            vector<int> dist(n, INT_MAX);
            queue<int> q;
            q.push(start);
            dist[start] = 0;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();

                for (int v : graph[u])
                {
                    if (dist[v] == INT_MAX)
                    {
                        dist[v] = dist[u] + 1;
                        q.push(v);
                    }
                }
            }
            return dist[end];
        };

        // Compute initial distance
        int shortest_distance = bfs(0, n - 1);
        ans.push_back(shortest_distance);

        // Process each query
        for (const auto &q : queries)
        {
            int u = q[0], v = q[1];
            // Add the new road to the graph
            graph[u].push_back(v);
            // Recompute shortest path from 0 to n-1
            shortest_distance = bfs(0, n - 1);
            ans.push_back(shortest_distance);
        }

        return ans;
    }
};

// Example usage
int main()
{
    Solution sol;
    int n = 5;
    vector<vector<int>> queries = {{0, 3}, {0, 2}};
    vector<int> result = sol.shortestDistanceAfterQueries(n, queries);

    // Output the results
    for (int length : result)
    {
        cout << length << endl;
    }

    return 0;
}
