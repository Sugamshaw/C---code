#include <iostream>
#include <vector>
using namespace std;
class functorOne
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    functorOne cmp;
    if (cmp(10, 5))
    {
        cout << "10 > 5" << endl;
    }
    else
    {
        cout << "10 < 5" << endl;
    }
    return 0;
}