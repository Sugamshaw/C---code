#include <iostream>
using namespace std;
void triplet(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

void shifting(int arr[], int size, int value)
{
    if (value == 0)
        return;

    int temp[size], shift_value = value % size, index = 0;
    for (int i = size - shift_value; i < size; i++)
    {
        temp[index] = arr[i];
        index++;
    }
    for (int i = size - 1; i >= 0; i--)
    {
        if (i - shift_value >= 0)
        {
            arr[i] = arr[i - shift_value];
        }
    }
    for (int i = 0; i < shift_value; i++)
    {
        arr[i] = temp[i];
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    // triplet(arr, 4, 60);
    int size = 6;
    cout << "Before shifting: ";
    display(arr, size);
    cout << endl;
    shifting(arr, size, 3);
    cout << "After shifting: ";
    display(arr, size);
    cout << endl;
    return 0;
}