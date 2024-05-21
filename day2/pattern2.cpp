#include <iostream>
using namespace std;
void pattern(int n)
{
    cout << "PAttern\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < 2 * (n - i - 1) + 1; k++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void fancy12pattern(int n)
{
    cout << "fancy12pattern\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i)
            {
                cout << i + 1;
            }
            else
            {
                cout << i + 1 << "*";
            }
        }
        cout << endl;
    }
}
void fullfancy12pattern(int n)
{
    cout << "fancy12pattern\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i)
            {
                cout << i + 1;
            }
            else
            {
                cout << i + 1 << "*";
            }
        }
        cout << endl;
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (j == n - i - 1)
            {
                cout << n - i;
            }
            else
            {
                cout << n - i << "*";
            }
        }
        cout << endl;
    }
}
void abcba(int n)
{
    cout << "abcba\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << (char)(ch + j);
        }
        for (int j = 0; j < i; j++)
        {
            cout << (char)(ch + i - j - 1);
        }
        cout << endl;
    }
}
int main()
{
    pattern(5);
    cout << endl;
    cout << endl;
    fancy12pattern(8);
    cout << endl;
    cout << endl;
    fullfancy12pattern(8);
    cout << endl;
    cout << endl;
    abcba(5);
    return 0;
}