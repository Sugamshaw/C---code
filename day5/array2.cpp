#include <iostream>
#include <algorithm>
using namespace std;
int func()
{
}
int main()
{
    int a = 10, b = 6;
    // swap(a,b);

    // int temp=a;
    // a=b;
    // b=temp;

    // arithematic method
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // xor
    //  a=a^b;
    //  b=a^b;
    //  a=a^b;
    //  cout << a << " " << b;
    int arr[10];
    fill(arr, arr + 3, 8);
    fill(arr + 3, arr + 5, 10);
    fill(arr + 5, arr + 8, 18);
    fill(arr + 8, arr + 10, 180);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }

    // int s = 0, e = sizeof(arr) / sizeof(arr[0]) - 1;
    // while (s < e)
    // {
    //     swap(arr[s++], arr[e--]);
    // }

    reverse(arr, arr + 10);
    cout << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}