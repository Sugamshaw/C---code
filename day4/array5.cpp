#include <iostream>
using namespace std;
int func(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += i[arr];
    }
    return sum;
}
void print(int arr[], int size)
{
    // int sum = 0;
    for (int i = 0; i < size; i++)
    {
        // sum += i[arr];
        cout << arr[i] << endl;
    }
    // return sum;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Sum : " << func(arr, 5) << endl;
    print(arr, 5);
    return 0;
}