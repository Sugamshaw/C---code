#include <iostream>
using namespace std;
int func()
{
}
int main()
{
    int arr[5] = {10}; // random number after 10 initialization
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    int arr2[5]; // random number to all index
    cout << "arr2: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }
    int arr3[] = {1, 2, 3, 5, 6, 8, 9, 10};
    cout << "arr3: " << endl;
    for (int i = 0; i < sizeof(arr3)/sizeof(int); i++)
    {
        cout << arr3[i] << endl;
    }
    return 0;
}