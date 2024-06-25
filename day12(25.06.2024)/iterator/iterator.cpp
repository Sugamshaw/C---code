#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
using namespace std;
int func()
{
}
int main()
{
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);

    // vector<int>::iterator it = arr.begin();

    // while (it != arr.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << "\n";

    // forward_list<int> list;
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);
    // list.push_front(40);
    // list.push_front(50);

    // forward_list<int>::iterator it = list.begin();
    // while (it != list.end())
    // {
    //     *it += 5;
    //     // cout << *it << " ";
    //     it++;
    // }
    // it = list.begin();
    // while (it != list.end())
    // {
    //     // *it += 5;
    //     cout << *it << " ";
    //     it++;
    // }

    // // biderctional iterator

    // list<int> l;
    // l.push_back(10);
    // l.push_back(20);
    // l.push_back(30);
    // l.push_back(40);
    // l.push_back(50);

    // list<int>::iterator it = l.begin();

    // while (it != l.end())
    // {
    //     *it += 2;
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << endl;
    // it = l.end();
    // while (it != l.begin())
    // {
    //     it--;
    //     // *it += 2;
    //     cout << *it << " ";
    // }

    // random access
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    vector<int>::iterator it = arr.begin();

    // while (it != arr.end())
    // {
    //     *it *= 2;
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << endl;
    // it = arr.end();
    // while (it != arr.begin())
    // {
    //     it--;
    //     cout << *it << " ";
    //     }
    // cout << "\n";

    cout<<*(it+3)<<endl;
    return 0;
}