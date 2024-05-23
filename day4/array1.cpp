#include <iostream>
using namespace std;
int func()
{
}
int main()
{
    int arr[5];
    arr[0] = 1;
    arr[1] = 12;
    arr[2] = 13;
    arr[3] = 14;
    arr[4] = 15;
    bool arr1[5]={1,0,true,1,0};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << endl;
    }
    return 0;
}