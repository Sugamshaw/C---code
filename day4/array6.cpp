#include <iostream>
using namespace std;
void func(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 1000;
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
    int arr[5] = {10, 20, 30, 40, 50};
    func(arr, 5);
    print(arr, 5);
    return 0;
}