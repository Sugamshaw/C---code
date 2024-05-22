#include <iostream>
using namespace std;
void evenorodd(int n)
{
    if (n & 1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }
}
void setBit(int n)
{
    cout << "Set Bit" << endl;
    int count = 0;
    while (n != 0)
    {
        int lastbit = n & 1;
        if (lastbit == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count << endl;
}
int main()
{
    evenorodd(10);
    evenorodd(11);
    setBit(10);
    setBit(31);
    return 0;
}