#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void doublenumber(int a)
{
    cout << 2 * a << endl;
}
int even(int a)
{
    return !(a & 1);
}
int main()
{
    // vector<int> v = {11, 10, 64, 20, 36};

    // for_each(v.begin(), v.end(), doublenumber);
    // auto it = find(v.begin(), v.end(), 203);
    // cout << *it;

    // auto it = find_if(v.begin(), v.end(), even);
    // cout << *it;

    // cout << count(v.begin(), v.end(), 11);
    // cout << count_if(v.begin(), v.end(), even);

    // sort(v.begin(), v.end());
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout<<endl;
    // reverse(v.begin(), v.end());
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }

    // vector<int> v = {10, 11, 12, 13, 14,15};
    // left rotate
    //  rotate(v.begin(), v.begin() + 2, v.end());//30 40 50 10 20
    //  for (int i : v)
    //  {
    //      cout << i << " ";
    //  }

    // right rotate
    // int k = 2;
    // rotate(v.begin(), v.end() - (v.size() % k), v.end()); // 50 10 20 30 40
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }

    // auto it = unique(v.begin(), v.end());
    // // it iterator k phle saaare unique element hai
    // // it k baad saare duplicate element hai
    // v.erase(it, v.end());
    // for (int a : v)
    // {

    //     cout << a << " ";
    // }

    vector<int> v = {10, 11, 12, 13, 14, 15, 20};

    auto it = partition(v.begin(), v.end(), even);

    for (int i : v)
    {
        cout << i << endl;
    }

    return 0;
}