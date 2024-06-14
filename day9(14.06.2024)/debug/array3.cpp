#include <iostream>
using namespace std;
void populate(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        arr[n - j - 1] = i + 2;
        arr[j] = i + 1;
        j++;
    }
}
int main()
{
    int size = 10;
    int arr[size];
    populate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}