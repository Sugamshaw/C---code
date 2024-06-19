#include <iostream>
#include <list>
using namespace std;
int func()
{
}
int main()
{
    // list<int> l;
    // l.push_back(10);
    // l.push_back(20);
    // l.push_back(30);
    // l.push_back(40);
    // l.push_back(50);

    // l.push_front(1);
    // l.push_front(2);
    // l.push_front(3);
    // l.push_front(4);

    // // for (int it : l)
    // // {
    // //     cout << it << endl;
    // // }
    // // cout << l.front() << endl;
    // // cout << l.back() << endl;
    // // cout << *(l.begin()) << endl;
    // // cout << *(prev(l.end())) << endl;

    // l.push_front(50);
    // l.push_front(50);
    // l.push_front(50);
    // l.remove(50);
    // list<int>::iterator it = l.begin();
    // while (it != l.end())
    // {
    //     cout << *it << endl;
    //     it++;
    // }

    // list<int> l = {10, 20, 30, 40};
    // list<int> l2 = {1, 2, 3, 4};

    // swap(l, l2);

    // list<int>::iterator it = l.begin();
    // list<int>::iterator it2 = l2.begin();
    // while (it != l.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << endl;
    // while (it2 != l2.end())
    // {
    //     cout << *it2 << " ";
    //     it2++;
    // }


    list<int> l = {10, 20, 30, 40};
    // l.insert(l.begin(),100);
    // list<int>::iterator it = l.begin();
    //  while (it != l.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }
    cout<<l.size()<<endl;
    l.erase(l.begin(),l.end());
    cout<<l.size()<<endl;

    cout << endl;

    return 0;
}