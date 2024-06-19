#include <iostream>
#include <unordered_map>
using namespace std;

int func()
{
}
int main()
{
    unordered_map<int, int> hash;
    hash[10] = 10;
    hash[20] = 20;
    hash[30] = 30;
    cout << hash[10] << endl;
    cout << hash[40] << endl;
    cout << hash[50] << endl;
    return 0;
}