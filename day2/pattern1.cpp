#include <iostream>
using namespace std;
void fullpyramid(int n)
{
    cout << "fullpyramid\n"
         << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void invertedpyramid(int n)
{
    cout << "invertedpyramid\n"
         << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void diamondpattern(int n)
{
    cout << "diamondpattern\n"
         << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void hollowpyramid(int n)
{
    cout << "hollowpyramid\n"
         << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == 1 || i == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void invertedhollowpyramid(int n)
{
    cout << "invertedhollowpyramid\n"
         << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            if (j == 1 || j == n - i + 1 || i == n || i == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void hollowdiamond(int n)
{
    cout << "hollowdiamond\n"
         << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            if (j == 1 || j == n - i + 1 || i == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    fullpyramid(5);
    cout << endl;
    cout << endl;
    invertedpyramid(5);
    cout << endl;
    cout << endl;
    diamondpattern(5);
    cout << endl;
    cout << endl;
    hollowpyramid(10);
    cout << endl;
    cout << endl;
    invertedhollowpyramid(5);
    cout << endl;
    cout << endl;
    hollowdiamond(5);
    return 0;
}