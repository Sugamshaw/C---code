#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    swapAlternate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}