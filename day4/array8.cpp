#include <iostream>
using namespace std;
void zeroandone(int arr[], int size)
{
    int z = 0, one = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            z++;
        }
        if (arr[i] == 1)
        {
            one++;
        }
    }
    cout << z << endl;
    cout << one << endl;
}
int main()
{
    int arr[10] = {0, 1, 0, 0, 0, 1, 0, 1, 0, 1};
    zeroandone(arr, 10);
    return 0;
}