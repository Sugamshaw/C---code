#include <iostream>
using namespace std;
void func(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }

            cout << endl;
        }
    }
}
void func2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (; i < n; i++)
        {
            cout << i << endl;
        }
        cout << "dfd" << i << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // func(arr,5);
    func2(arr, 5);
    // cout << arr << " " << &arr << " " << &arr[0];
    return 0;
}