#include <iostream>
#include <vector>
using namespace std;
int oddoccuringelement(vector<int> arr)
{
    int s = 0, n = arr.size(), e = n - 1;
    if (s == e)
    {
        return arr[s];
    }
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid - 1 >= 0 && mid + 1 < n && arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        if (mid-1<0)
        {
            if (arr[mid] != arr[mid + 1]) return mid;
        }
        if (mid+1>=arr.size())
        {
            if (arr[mid] != arr[mid - 1]) return mid;
        }

        if ((mid & 1) == 0)
        {
            if (mid + 1 < n && arr[mid] == arr[mid + 1])
            {
                s = mid + 1;
            }
            if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
            {
                e = mid - 1;
            }
        }
        else
        {
            if (mid + 1 < n && arr[mid] == arr[mid + 1])
            {
                e = mid - 1;
            }
            if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    // vector<int> v = {1, 1, 2, 2, 3, 3, 4, 5, 5, 3, 3};
    vector<int> v = {2, 2, 3, 3,0};
    cout << "Index: " << oddoccuringelement(v);

    return 0;
}