#include <iostream>
using namespace std;
void func(int arr[], int size)
{
    for (int i = 0, j = 9; i <= j; i++, j--)
    {
        cout << arr[i] << " " << arr[j] << " ";
    }
}
void swap1(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}
void reverse(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // swap1(arr, 11);
    // print(arr, 11);
    // reverse(arr, 11);
    // int a = 3, b = 10;
    // int c = a ^ b;
    // a = c ^ a;
    // b = c ^ b;
    // cout << "a: " << a << " b: " << b << endl;

    return 0;
}