#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(vector<int> nums, int s, int e, int target)
{
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target = 100;
    int low = 0, high = 1;
    while (arr[high] < target && high < arr.size())
    {
        low = high;
        high *= 2;
    }
    high = min(high, (int)(arr.size() - 1));
    cout << low << " " << high << endl;
    int pos = binarySearch(arr, low, high, target);
    cout << pos << endl;
    return 0;
}