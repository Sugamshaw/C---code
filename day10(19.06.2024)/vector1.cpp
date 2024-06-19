#include <iostream>
#include <vector>
using namespace std;
int func()
{
}
int main()
{
    vector<int> marks;
    vector<int> a(10);
    vector<int> dist(15, 0); // 15 length with 0 fill in everywhere

    // cout<<*(dist.begin())<<endl;
    // cout<<*(dist.end()-1)<<endl;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // cout << a.size() << endl;
    // a.pop_back();
    // cout << a.size() << endl;
    // if (a.empty())
    // {
    //     cout << "empty" << endl;
    // }
    // else
    // {

    //     cout << "not empty" << endl;
    // }

    // cout << a[10] << endl;
    // cout << a.at(10) << endl;
    // cout << a.capacity() << endl;

    vector<int> b(10, 2);
    // b.reserve(12);

    // cout << b.max_size() << endl;
    // cout << b.capacity() << endl;
    // cout<<b.size()<<endl;
    // b.clear();
    // cout<<b.size()<<endl;

    // b.insert(b.begin(), 50);
    // cout << b[0] << endl;

    // cout<<b.size()<<endl;
    // b.erase(b.begin(),b.end());
    // cout<<b.size()<<endl;

    // vector<int> c(10, 2);
    // vector<int> d(10, 1);

    // swap(c, d);
    // cout << c[0] << endl;
    // cout << d[0] << endl;

    // for (int it : c)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // for (int it : d)
    // {
    //     cout << it << " ";
    // }

    // for (int i = 0; i < d.size(); i++)
    // {
    //     cout << d[i] << " ";
    // }

    // vector<int> d(10, 1);
    // vector<int>::iterator it = d.begin();
    // for (; it < d.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    return 0;
}