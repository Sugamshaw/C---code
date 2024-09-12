#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void digits(int nums)
{
    if (nums == 0)
    {
        return;
    }
    digits(nums / 10);
    cout << "digits : " << nums % 10 << endl;
}
bool sorted_or_not(int arr[], int size, int index)
{
    if (index >= size - 1)
    {
        return true;
    }
    if ((index < size - 1) && (arr[index] < arr[index + 1]))
    {
        return sorted_or_not(arr, size, index + 1);
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {100, 20, 30, 40, 50, 60, 70};

    cout << (sorted_or_not(arr, 7, 0) ? "Array is sorted" : "Array is not sorted") << endl;

    return 0;
}