#include <iostream>
using namespace std;
int countsetbit(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    cout << countsetbit(23);
    return 0;
}