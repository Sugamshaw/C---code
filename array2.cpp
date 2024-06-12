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
int main()
{
    int arr[] = {10, 20, 30, 40};

    pair<int, int> ans = twosum(arr, 4, 50);
    cout << "Output : " << endl;
    if (ans.first == -1 && ans.second == -1)
    {
        cout << "Pair not found";
    }
    else
    {
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}