// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5

#include <iostream>
using namespace std;
void pattern1(int n)
{
    cout << "pattern1\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i == n - 1)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    cout << "pattern2\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j == i || j == n - 1 || i == 0)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    cout << "pattern3\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    cout << "pattern4\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    cout << "pattern5\n"
         << endl;
    int count = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << count;
            }
            else
            {

                cout << count << "*";
            }
            count++;
        }
        cout << endl;
    }
    count = count - n;
    int ncount = count, j = 0;
    for (int i = 0; i < n; i++)
    {
        // ncount = count;
        for (j = 0; j <= n - i - 1; j++)
        {
            if (j == n - i - 1)
            {
                cout << ncount;
            }
            else
            {

                cout << ncount << "*";
            }
            ncount++;
        }
        ncount = count - j + 1;
        count = ncount;
        cout << endl;
    }
}
void pattern6(int n)
{
    cout << "pattern6\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "*";
        for (int j = 0; j < i - 1; j++)
        {
            cout << j + 1;
        }

        for (int j = i; j >= 1; j--)
        {
            if (j == 1)
            {
                cout << j << "*";
            }
            else
            {

                cout << j;
            }
        }

        cout << endl;
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << "*";
        for (int j = 0; j < n - i - 2; j++)
        {
            cout << j + 1;
        }

        for (int j = n - i - 1; j >= 1; j--)
        {
            if (j == 1)
            {
                cout << j << "*";
            }
            else
            {

                cout << j;
            }
        }

        cout << endl;
    }
}
void pattern7(int n)
{
    cout << "pattern7\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        int cond = (i <= n / 2) ? 2 * i : 2 * (n - i - 1);
        for (int j = 0; j <= cond; j++)
        {
            if (j <= cond / 2)
            {
                cout << j + 1;
            }
            else
            {
                cout << cond - j + 1;
            }
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    cout << "pattern8\n"
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

int main()
{
    pattern1(5);
    cout << endl;
    cout << endl;
    pattern2(5);
    cout << endl;
    cout << endl;
    pattern3(5);
    cout << endl;
    cout << endl;
    pattern4(5);
    cout << endl;
    cout << endl;
    pattern5(5);
    cout << endl;
    cout << endl;
    pattern6(6);
    cout << endl;
    cout << endl;
    pattern7(7);
    cout << endl;
    cout << endl;
    pattern8(5);

    return 0;
}