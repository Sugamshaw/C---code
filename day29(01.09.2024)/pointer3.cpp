#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void func(int *arr, int size)
{
    cout << sizeof(arr) << endl;
}
void func1(int arr[], int size)
{
    cout << sizeof(arr) << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    func(arr, 5);
    return 0;
}