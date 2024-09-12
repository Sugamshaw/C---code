#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int func()
{
}
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int i, sum = 0, *b = a + 4;
    cout << *b << endl;
    for (i = 0; i < 5; i++)
    {
        sum = sum + (*b - i) - *(b - i);
    }
    cout << sum;
    return 0;
}