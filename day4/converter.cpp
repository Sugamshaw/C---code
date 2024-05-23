#include <iostream>
using namespace std;
void func(int n)
{
    while (n != 0)
    {
        int r = n % 10;
        cout << r << " ";
        n /= 10;
    }
}
void evenorodd1(int n)
{
    if (n % 2)
    {
        cout << "odd" << endl;
    }
    else
    {
        cout << "even" << endl;
    }
}
void evenorodd2(int n)
{
    if (n & 1)
    {
        cout << "odd" << endl;
    }
    else
    {
        cout << "even" << endl;
    }
}

int main()
{
    func(10245);
    cout << endl;
    cout << endl;
    evenorodd1(10241);
    cout << endl;
    cout << endl;
    evenorodd2(102402);
    return 0;
}