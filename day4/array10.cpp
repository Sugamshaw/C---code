#include <iostream>
using namespace std;
void func(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
        }
    }
}
void func2(int arr[], int size)
{
    int zero = 0, one = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    fill(arr, arr + zero, 0);
    fill(arr + zero, arr + size, 1);
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {1, 1, 0, 1, 1, 1, 0, 1, 0, 1};

    // func1(arr, 10);
    func2(arr, 10);
    print(arr, 10);
    return 0;
}