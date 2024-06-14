#include <iostream>
using namespace std;
int swaparr(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3, col = 3;
    // if (search(arr, 3, 3, 4))
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "not Found" << endl;
    // }
    cout << "Before: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    swaparr(arr, row, col);
    cout << "After: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}