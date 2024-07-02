#include <iostream>
#include <vector>
using namespace std;
vector<int> findcomplement(vector<int> arr)
{
    int n = arr.size();
    vector<int> result(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        result[i + 1] = (arr[i] == 0) ? 1 : 0;
    }
    int carry = 1;
    // return result;
    for (int i = result.size() - 1; i >= 0; i--)
    {
        int sum = carry + result[i];
        result[i] = sum % 2;
        carry = sum / 2;
    }
    if (carry == 1)
    {
        result[0] = 1;
    }
    return result;
}
int main()
{
    vector<int> v = {1, 1, 1, 0, 1, 0, 1, 1, 0};
    vector<int> ans = findcomplement(v);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}