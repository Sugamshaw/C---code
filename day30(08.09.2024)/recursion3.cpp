#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int binary_s(int arr[], int size, int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return binary_s(arr, size, start, mid - 1, target);
    }
    else
    {
        return binary_s(arr, size, mid + 1, end, target);
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << binary_s(arr, 5, 0, 4, 10) << endl;
    cout << binary_s(arr, 5, 0, 4, 50) << endl;
    cout << binary_s(arr, 5, 0, 4, 30) << endl;
    cout << binary_s(arr, 5, 0, 4, 35) << endl;
    cout << binary_s(arr, 5, 0, 4, 100) << endl;
    cout << binary_s(arr, 5, 0, 4, 0) << endl;

    return 0;
}