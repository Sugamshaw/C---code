#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array using pointer arithmetic
    int size = (*(&arr + 1) - *(&arr));

    cout << "arr: " << &arr << endl;
    cout << "arr: " << *(&arr) << endl;
    cout << "arr first: " << &arr[0] << endl;
    cout << "&arr + 1: " << &arr + 1 << endl;
    cout << "Size of the array: " << size << endl;

    return 0;
}