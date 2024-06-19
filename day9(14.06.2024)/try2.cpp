#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        int arr[a];
        int pow = 0;
        for (i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] != 0)
            {
                pow = i;
            }
        }
        ans.push_back(pow);
    }
    for (auto it : ans)
    {
        cout << it << endl;
    }
}
