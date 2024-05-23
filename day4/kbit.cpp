#include <iostream>
using namespace std;
int kbit(int n, int k)
{
    int s = 1 << k;
    cout << (n | s) << endl;
}
int main()
{
    kbit(10, 2);
    return 0;
}