#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {44, 33, 55, 22, 11};
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key=arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for (int i : arr)
    {
        cout << i << endl;
    }
    return 0;
}