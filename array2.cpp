#include <iostream>
using namespace std;
pair<int, int> twosum(int arr[], int size, int target)
{
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}
tuple<int, int, int> triplet(int arr[], int size, int target)
{
    tuple<int, int, int> ans = make_tuple(-1, -1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++) // Start j from i + 1
        {
            for (int k = j + 1; k < size; k++) // Start k from j + 1
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    ans = make_tuple(arr[i], arr[j], arr[k]);
                    return ans;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};

    // Testing twosum
    pair<int, int> ans1 = twosum(arr, 4, 50);
    cout << "Two-sum Output : " << endl;
    if (ans1.first == -1 && ans1.second == -1)
    {
        cout << "Pair not found" << endl;
    }
    else
    {
        cout << ans1.first << " " << ans1.second << endl;
    }

    // Testing triplet
    tuple<int, int, int> ans2 = triplet(arr, 4, 70);
    cout << "Triplet Output : " << endl;
    if (get<0>(ans2) == -1 && get<1>(ans2) == -1 && get<2>(ans2) == -1)
    {
        cout << "Triplet not found" << endl;
    }
    else
    {
        cout << get<0>(ans2) << " " << get<1>(ans2) << " " << get<2>(ans2) << endl;
    }
    return 0;
}