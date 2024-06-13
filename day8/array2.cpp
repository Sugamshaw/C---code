#include <iostream>
using namespace std;
int search(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (search(arr, 3, 3, 4))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "not Found" << endl;
    }
    return 0;
}