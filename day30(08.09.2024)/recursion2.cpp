#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int arrayprint(int arr[], int size)
{
    if (size == 0)
    {
        return arr[0];
    }
    cout << arr[size - 1] << endl;
    return arrayprint(arr, size - 1);
}
bool searcharray(int arr[], int size, int target)
{
    if (size == -1)
    {
        return 0;
    }
    if (arr[size] == target)
    {
        return 1;
    }
    return searcharray(arr, size - 1, target);
}
int maxarray(int arr[], int size, int max)
{
    if (size == 0)
    {
        return max;
    }
    if (arr[size - 1] > max)
    {
        max = arr[size - 1];
    }
    return maxarray(arr, size - 1, max);
}
int minarray(int arr[], int size, int min)
{
    if (size == 0)
    {
        return min;
    }
    if (arr[size - 1] < min)
    {
        min = arr[size - 1];
    }
    return minarray(arr, size - 1, min);
}

void printodd(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    if (arr[size - 1] % 2)
    {
        cout << arr[size - 1] << endl;
    }
    return printodd(arr, size - 1);
}
void printeven(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    if ((arr[size - 1] & 1) == 0)
    {
        cout << arr[size - 1] << endl;
    }
    return printeven(arr, size - 1);
}

int main()
{
    int arr[] = {10, 2, 11, 4, 5};
    // cout << searcharray(arr, 5, 10) << endl;
    // cout << minarray(arr, 5, INT_MAX) << endl;
    printeven(arr, 5);

    return 0;
}