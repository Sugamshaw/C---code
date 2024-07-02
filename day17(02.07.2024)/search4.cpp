
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int peak_element(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] > v[mid + 1])
        {
            return mid;
        }
        if (v[mid] < v[mid - 1])
        {
            return mid - 1;
        }
        if (v[mid] > v[s])
        {
            s += 1;
        }
        else
        {
            e -= 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {50, 60, 70, 10, 20, 30, 40};
    cout << peak_element(v);
    return 0;
}