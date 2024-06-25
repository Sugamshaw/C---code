#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int func()
{
}
int main()
{
    vector<int> v = {10, 544, 2, 253, 30};

    make_heap(v.begin(), v.end()); //o(n)
    for (int i : v)
    {
        cout << i << " ";
    };
    cout << endl;
    // v.push_back(301);
    // push_heap(v.begin(), v.end()); //o(log n)
    // for (int i : v)
    // {
    //     cout << i << " ";
    //     };

    // cout<<endl;
    // deletion

    // pop_heap(v.begin(), v.end()); //o(1)
    // v.pop_back();
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }

    sort_heap(v.begin(),v.end()); //o(n)
     for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}