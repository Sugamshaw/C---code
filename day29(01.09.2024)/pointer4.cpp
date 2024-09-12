#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void func(int arr[], int size)
{
    arr[0] = 1;
    arr[1] = 10205;
    
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    func(arr, 5);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    return 0;
}