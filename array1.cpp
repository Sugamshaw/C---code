#include <iostream>
using namespace std;
void pair1(int arr[], int size)
{
    cout << "Output : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}
void twosum(int arr[], int size, int target)
{
    cout << "Output : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {

                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    twosum(arr, 4, 50);
    return 0;
}