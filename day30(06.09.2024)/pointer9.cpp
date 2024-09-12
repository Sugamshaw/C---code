#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int func()
{
}
int main()
{
    // int a[] = {10, 20, 30, 40, 50};
    // int *p[] = {a, a + 3, a + 4, a + 1, a + 2};
    // int **ptr = p;
    // // cout << **ptr << endl;
    // cout << **(ptr + 1) << endl;
    // ptr++;
    // cout << ptr << endl;
    // cout << p << endl;
    // cout << sizeof(p) << endl;
    // cout << ptr - p << **ptr << endl;
    int a = 10;
    int s = sizeof(a);
    int arr[] = {10, 20, 30, 40, 50, 102, 65};
    int n = (*(&arr + 1) - *(&arr));
    cout << n << endl;
    return 0;
}