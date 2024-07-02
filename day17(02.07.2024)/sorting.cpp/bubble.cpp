#include <iostream>
#include <vector>
using namespace std;
int func()
{
}
int main()
{
    vector<int> arr = {5, 4, 1, 2, 3};
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
    for (int i : arr)
    {
        cout << i << endl;
    }
    return 0;
}