#include <iostream>
#include <deque>
using namespace std;
int func()
{
}
int main()
{
    // deque<int> d;

    // d.push_back(10);
    // d.push_back(20);
    // d.push_back(30);
    // d.push_back(40);

    // d.push_front(1);
    // d.push_front(2);
    // d.push_front(3);
    // d.push_front(4);

    // cout << d.size() << endl;
    // d.pop_front();
    // d.pop_back();
    // cout << d.size() << endl;

    // cout << d.front() << endl;
    // cout << d.back() << endl;
    // cout << d.empty() << endl;

    // deque<int>::iterator itr=d.begin();

    // while (itr!=d.end())
    // {
    //     cout << *itr << " ";
    //     itr++;
    // }

    // cout << d.size() << endl;
    // // d.clear();
    // d.erase(d.begin(),d.end());
    // cout << d.size() << endl;
    // d.insert(d.begin(), 25);
    // d.insert(d.begin(),25)
    // for (int i = 0; i < d.size(); i++)
    // {
    //     // cout << d.at(i) << " ";
    //     cout << d[i] << " ";
    // }

    deque<int> d;

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    deque<int> d1;

    d1.push_back(141);
    d1.push_back(4242);
    d1.push_back(24);
    d1.push_back(4244);

    swap(d, d1);

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " ";
    }

    return 0;
}