#include <iostream>
#include <queue>
using namespace std;
int func()
{
}
int main()
{
    // priority_queue<int> p; // max heap
    // p.push(10);
    // p.push(100);
    // p.push(30);
    // p.push(1);
    // p.push(17);
    // p.push(81);
    // p.push(47);

    // cout <<"Top : "<< p.top() << endl;
    // cout <<"Size : "<< p.size() << endl;

    // priority_queue<int> p; // max heap
    // p.push(10);
    // p.push(100);
    // p.push(30);
    // p.push(1);
    // p.push(17);
    // p.push(81);
    // p.push(47);
    // priority_queue<int> p1; // max heap
    // p1.push(114);
    // p1.push(10140);
    // p1.push(41);
    // p1.push(14);
    // p1.push(14);
    // p1.push(825221);
    // p1.push(525);
    // swap(p, p1);
    // while (!p.empty())
    // {
    //     cout << p.top() << " ";
    //     p.pop();
    // }
    // cout << endl;
    // while (!p1.empty())
    // {
    //     cout << p1.top() << " ";
    //     p1.pop();
    // }

    priority_queue<int, vector<int>, greater<int>> p;
    p.push(10);
    p.push(100);
    p.push(100);
    p.push(30);
    p.push(1);
    p.push(17);
    p.push(81);
    p.push(47);
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;

    return 0;
}