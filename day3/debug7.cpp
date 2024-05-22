/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
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
        int j = 1;
        while (j <= n-i)
        {
            cout << j;
            j++;
        }
        j = 2 * i;
        while (j > 0)
        {
            cout << "*";
            j--;
        }
        j = n - i;
        while (j > 0)
        {
            cout << j;
            j--;
        }
        i++;
        cout << "\n";
    }
}