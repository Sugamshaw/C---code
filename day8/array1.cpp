#include <iostream>
using namespace std;
int sum(int arr[][3], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
void trav(int arr[][4], int row, int col)
{
    // int sum = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void diagonal(int arr[][4], int row, int col)
{
    // int sum = 0;
    cout << "Diagonal " << endl;
    for (int i = 0; i < col; i++)
    {
        cout << arr[i][i] << endl;
    }
}
void rightdiagonal(int arr[][4], int row, int col)
{
    // int sum = 0;
    cout << "Diagonal " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // for (auto it : arr)
    // {
    //     cout << it << endl;
    // }
    // int arr[3][3] = {{1, 2, 3},
    //                {4, 5, 6},
    //                {7, 8, 9}};
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16};
    int row=4,col=4;
    // int arr[3][3] = {1, 2, 3, 4, 5};

    // cout << "SUM: " << sum(arr, 3, 3) << endl;
    trav(arr, row, col);
    rightdiagonal(arr, row, col);
    return 0;
}