#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void func(int *arr, int size)
{
    cout << sizeof(arr) << endl;
}
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
       
    return 0;
}