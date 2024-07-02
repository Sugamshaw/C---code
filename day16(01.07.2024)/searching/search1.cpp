#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int binarySearch(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(s==e)
        {
            return s;
        }
        if(mid&1)
        {
            if(arr[mid]==arr[mid-1])
            {
                
            }
        }
    }
}
int main()
{
    vector<int> v = {1, 1, 2, 2, 3, 3, 4, 5, 5, 3, 3};
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    for (auto it : m)
    {
        if (it.second % 2)
        {
            cout << it.first << endl;
        }
    }

    return 0;
}