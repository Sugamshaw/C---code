#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void print(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    cout << *arr << endl;
    print(arr+1, size - 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    print(arr, 5);
    return 0;
}