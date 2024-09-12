#include <iostream>
using namespace std;
int minChanges(int n, int k)
{
    int count = 0;
    while (n != 0 || k != 0)
    {
        int bit1 = n & (1 << 0);
        int bit2 = k & (1 << 0);
        if (bit1==1 && bit2==0)
        {
            count++;
        }
        else if(bit1==0 && bit2==1){
            return -1;
        }
        n >>= 1;
        k >>= 1;
    }

    return count;
}
int main()
{
    cout << minChanges(14, 13) << endl;
    return 0;
}