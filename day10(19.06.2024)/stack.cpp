#include <iostream>
#include <stack>
using namespace std;
int func()
{
}
int main()
{
    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);

    // cout << s.size() << endl;
    // s.pop();
    // cout << s.size() << endl;
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;
    // cout<<s.empty()<<endl;

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    stack<int> s2;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);

    swap(s, s2);
      
    return 0;
}