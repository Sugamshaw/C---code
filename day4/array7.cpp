#include <iostream>
#include <limits.h>
using namespace std;
int linear(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int maxi(int arr[], int size)
{
    int maxi = INT_MIN;
    // cout<<maxi<<endl;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
        maxi = max(arr[i], maxi);
    }
    return maxi;
}
int main()
{
    int arr[10] = {1, 2, 312, 4, 5, 6, 7, 8, 9, 10};
    // int pos = (linear(arr, 10, 9));
    // pos == -1 ? cout << "Not found" : cout << "Found at index " << pos << endl;
    cout << "max element: " << maxi(arr, 10);
    return 0;
}