#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void fillPrimes(vector<int>& prime, int high)
{
    vector<bool> ck(high+1, true);
    for (int i = 2; (i * i) <= high; i++) {
        if (ck[i] == true) {
            for (int j = i * i; j <= sqrt(high); j = j + i) {
                ck[j] = false;
            }
        }
    }
    for (int i = 2; i * i <= high; i++) {
        if (ck[i] == true) {
            prime.push_back(i);
        }
    }
}
int main()
{

    char arr[20];
    int i;
    for (i = 0; i < 10; i++)
    {
        *(arr + i) = 65 + i;
    }
    // *(arr + i) = '\0';
    cout << arr;
    return 0;
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout << c << endl;
    // int a[] = {1, 2, 3, 4, 5};
    // int *p = (a + 1);
    // cout << *p << endl;
    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;
    // int p = 5;
    // int const *q = &p;
    // p++;
    // cout << p << endl;
    // int const p = 5;
    // cout << p;
    // cout << ++p;
    return 0;
}