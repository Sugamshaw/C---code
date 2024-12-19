#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool func(int arr[], int size)
{
    if (size <= 1)
    {
        return 1;
    }
    if (arr[size - 1] >= arr[size - 2])
    {
        return func(arr, size - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int arr[] = {10, 10, 30, 40, 50};
    int size = 5;
    cout << func(arr, size) << endl;
    return 0;
}