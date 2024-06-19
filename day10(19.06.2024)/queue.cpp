#include <iostream>
#include <queue>
using namespace std;
int func()
{
}
int main()
{
    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // cout << q.size() << endl;
    // q.pop();
    // cout << q.size() << endl;
    // cout << q.empty() << endl;
    // cout<<q.back()<<endl;
    // cout<<q.front()<<endl;

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << q.front() << " " << q.back() << endl;
    return 0;
}