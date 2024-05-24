#include <iostream>
using namespace std;
void func(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    func(arr, 4);
    return 0;
}