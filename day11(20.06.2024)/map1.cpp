#include <iostream>
#include <map>
using namespace std;
int func()
{
}
int main()
{
    map<int, string> t;
    t.insert(make_pair(5, "dss"));
    t.insert(make_pair(7, "ff"));
    t.insert(make_pair(2, "dh"));

    map<int, string>::iterator it = t.begin();
    while (it != t.end())
    {
        pair<int, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }
    return 0;
}