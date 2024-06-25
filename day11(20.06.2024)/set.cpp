#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int func()
{
}
int main()
{
    unordered_set<int> s;

    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(50);
    s.insert(40);

    // unordered_set<int>::iterator it = s.begin();
    // while (it != s.end())
    // {
    //     cout << *it << endl;
    //     it++;
    // }

    // cout << s.size() << endl;
    // s.clear();
    // cout << s.size() << endl;
    // cout << s.empty() << endl;
    // s.erase(s.begin(), s.end());
    // cout << s.size() << endl;

    // if(s.find(10)!=s.end())
    // {
    //     cout<<"f"<<endl;

    // }
    // else{
    //     cout<<"n f"<<endl;
    // }

    cout<<s.count(10)<<endl;

    return 0;
}