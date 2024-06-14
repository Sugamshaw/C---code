#include <iostream>
using namespace std;

int pairSumToX(int input[], int size, int x)
{
    int pairs = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (input[i] + input[j] == x)
                pairs++;
        }
    }
    return pairs;
}

int main()
{
    int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << pairSumToX(arr, size, 5);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    return 0;
}
