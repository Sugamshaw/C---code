#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// bool mycomp(int a, int b)
// {
//     return a > b;
// }
bool mycomp2(vector<int> &a, vector<int> &b)
{
    return a[1] > b[1];
}
int main()
{
    // vector<int> arr = {5, 4, 1, 2, 3};
    // sort(arr.begin(), arr.end(), mycomp);
    // for (int i : arr)
    // {
    //     cout << i << endl;
    // }

    vector<vector<int>> arr;
    int n;
    cout << "size: " << endl;
    cin >> n;
    cout << "enter data: " << endl;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> v = {a, b};
        arr.push_back(v);
    }

    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i][0] << " " << arr[i][1] << endl;
    // }
    sort(arr.begin(), arr.end(), mycomp2);
    cout << "OUTPUT: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }

    return 0;
}