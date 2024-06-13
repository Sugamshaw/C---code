#include <iostream>
#include <vector>
using namespace std;
int func()
{
}
int main()
{
    // initilaize
    // vector<int> a;
    // vector<int> b(5, 1010);
    // vector<int> c = {1, 2, 3, 5, 6};
    // vector<int> d{1, 2, 3, 4,5};

    // // coppyyy
    // vector<int> e(d);
    // for (int i = 0; i < e.size(); i++)
    // {
    //     cout << e[i] << endl;
    // }
    // cout << b.capacity();

    // vector<char> v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');
    // v.push_back('d');

    // cout << v.capacity() << endl;
    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;
    // cout << v[v.size() - 1] << endl;
    // cout << v.back() << endl;

    vector<int> v = {10, 20, 30, 40, 50};

    for (auto it : v)
    {
        cout << it << endl;
    }

    return 0;
}