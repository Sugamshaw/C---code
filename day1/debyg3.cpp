/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = i, count = 2 * i + 1, gaps = (n - i - 1), k = 0;
        while (k < gaps)
        {
            cout << " ";
            k = k + 1;
        }
        int m = 1;
        while (m <= count)
        {
            cout << "*";
            m = m + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}