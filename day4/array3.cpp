#include <iostream>
using namespace std;
int func()
{
}
int main()
{
    int arr[10];
    fill(arr, arr + 8, 20);
    cout << "arr: " << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << i << " : " << arr[i] << endl;
    }
    return 0;
}