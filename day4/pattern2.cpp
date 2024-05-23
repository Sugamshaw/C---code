#include <iostream>
using namespace std;
void pattern1(int n)
{
    cout << "pattern1\n"
         << endl;
    for (int i = 1; i <= n; i++)
    {
        int c = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c = c * (i - j) / j;
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    cout << "pattern2\n"
         << endl;
    for (int i = 0; i < 2 * n; i++)
    {
        int cond = i < n ? i + 1 : 2 * n - i;
        int space = i < n ? 2 * (n - i - 1) : 2 * (i - n);
        for (int j = 0; j < cond; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < cond; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern1(5);
    cout << endl;
    cout << endl;
    pattern2(10);
    cout << endl;
    cout << endl;

    return 0;
}