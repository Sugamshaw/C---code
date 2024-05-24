#include <iostream>
using namespace std;
pair<int, int> func(int arr[], int size, int key)
{
    pair<int, int> p = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                p.first = arr[i];
                p.second = arr[j];

                return p;
            }
        }
    }
    return p;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    pair<int, int> ans = func(arr, 4, 4);
    if (ans.first != -1 && ans.second != -1)
    {
        cout << ans.first<<" "<<ans.second<<endl;
    }
    else
    {

        cout << "not possible";
    }
    return 0;
}