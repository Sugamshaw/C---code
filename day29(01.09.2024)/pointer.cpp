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
    int a = 10;
    int *p = &a;
    int **q = &p;
    int **r = &p;

    cout << **r << endl;

    return 0;
}