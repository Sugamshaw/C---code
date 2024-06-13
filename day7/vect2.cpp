// in vector dont tell size of array , i will initialize

#include <iostream>
#include <vector>
using namespace std;
int func()
{
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);

    v.pop_back();
    v.pop_back();
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }

    cout << "Capacity : " << v.capacity() << endl;
    // cout << v.size() << endl;
    v.clear();
    v.push_back(3235);
    cout << v[0]<<endl;
    cout << v[1]<<endl;


    

    return 0;
}