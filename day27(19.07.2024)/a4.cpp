#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long int cut_tree(vector<long long int> tree, long long int mid)
{
    long long int diff = 0;
    for (int i = 0; i < tree.size(); i++)
    {
        if (tree[i] > mid)
        {
            diff += (tree[i] - mid);
        }
    }
    return diff;
}
long long int maxsaw(vector<long long int> tree, long long int m)
{
    int s = 0, e = *max_element(tree.begin(), tree.end());
    long long int ans = -1, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        long long int cuttree = cut_tree(tree, mid);
        if (cuttree >= m)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    long long int n, m;
    cin >> n;
    cin >> m;
    vector<long long int> tree;
    while (n--)
    {
        long long int h;
        cin >> h;
        tree.push_back(h);
    }

    cout << maxsaw(tree, m) << endl;
    return 0;
}