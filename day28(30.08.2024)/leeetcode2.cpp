#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> resultsArray(vector<vector<int>> &queries, int k)
{
    // Max-heap to maintain the k smallest distances
    priority_queue<int> maxHeap;
    vector<int> result;

    for (auto &q : queries)
    {
        int x = q[0];
        int y = q[1];
        int distance = abs(x) + abs(y);

        // Push the current distance into the max-heap
        maxHeap.push(distance);

        // If the size of the heap exceeds k, remove the largest element
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }

        // If the size of the heap is less than k, return -1
        if (maxHeap.size() < k)
        {
            result.push_back(-1);
        }
        else
        {
            // Otherwise, the root of the max-heap is the k-th smallest distance
            result.push_back(maxHeap.top());
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> queries = {{1, 2}, {3, 4}, {2, 3}, {-3, 0}, {5, 9}, {10, 15}};
    int k = 3;

    vector<int> results = resultsArray(queries, k);

    for (int res : results)
    {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}
