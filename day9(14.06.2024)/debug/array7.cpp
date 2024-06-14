#include <iostream>
using namespace std;

void sort0sand1s(int input[], int size)
{
    int nextZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
        {
            int temp = input[nextZero];
            input[nextZero] = input[i];
            input[i] = temp;
            nextZero++;
        }
    }
}

int main()
{
    int size = 5;
    int arr[size] = {1, 0, 0, 1, 0};
    // sort0sand1s(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    int a[10];
    cout << a[0] << endl;
    return 0;
}